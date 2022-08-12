/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc013/submissions/33966280
 * Submitted at: 2022-08-12 23:53:18
 * Problem URL: https://atcoder.jp/contests/ahc013/tasks/ahc013_a
 * Result: AC
 * Execution Time: 2856 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int n = 0, k;
// ----- Structures ----- //
struct Point {
  int x, y;
  Point(): x(0), y(0) {}
  Point(int x, int y): x(x), y(y) {}
  Point(pair<int, int> p): x(p.first), y(p.second) {}
  Point operator+=(const Point& p) {
    x += p.x;
    y += p.y;
    return *this;
  }
  Point operator+(const Point& p) {
    return Point(x + p.x, y + p.y);
  }
  Point operator-(const Point& p) {
    Point tmp = *this;
    return Point(x - p.x, y - p.y);
  }
  pair<int, int> to_pair() { return { x, y }; }
  bool outside() {
    return x < 0 || x >= n || y < 0 || y >= n;
  }
};
void operator<<(ostream& os, const Point& p) {
  os << "(" << p.x << ", " << p.y << ")";
}
struct Timer {
  private:
  chrono::system_clock::time_point st;

  public:
  void start() {
    st = chrono::system_clock::now();
  }
  bool check() {
    auto now = chrono::system_clock::now();
    auto diff = now - st;
    return chrono::duration_cast<chrono::milliseconds>(diff).count() < 2850;
  }
  void show(string name) {
    return;
    auto now = chrono::system_clock::now();
    auto diff = now - st;
    cerr << "[now] " << name << ": " << chrono::duration_cast<chrono::milliseconds>(diff).count() << " ms"
         << "\n";
  }
};
Timer timer;

// ----- Global Variables ----- //
vector field(n, vector<pair<int, int>>(n));
vector<Point> computer(0);

// ----- Types ----- //
using ansquery_t = pair<Point, Point>;
using move_t = vector<ansquery_t>;
using conn_t = vector<ansquery_t>;

// ----- Constants ----- //
const vector<Point> dir = {
  Point(0, 1),
  Point(1, 0),
  Point(0, -1),
  Point(-1, 0),
};

// ----- random ----- //
inline int randint(int l, int r) {
  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution<> dist(l, r);
  return dist(mt);
}

// ----- Combination ----- //
inline int Combi2(int x) { return x * (x - 1) / 2; }

// ----- Calc Score ----- //
inline int calc_score(const move_t& move, const conn_t& conn) {
  if (move.size() + conn.size() > 100 * k) return 0;
  vector fc(field);
  vector comp(computer);
  // cout << "[Debug] " << move.size() << " " << conn.size() << "\n";
  // output(move, conn);
  for (auto m : move) {
    assert(fc[m.first.x][m.first.y].first != 0);
    assert(fc[m.second.x][m.second.y].first == 0);
    comp[fc[m.first.x][m.first.y].second] = m.second;
    swap(fc[m.first.x][m.first.y], fc[m.second.x][m.second.y]);
  }
  dsu d(comp.size());
  for (auto c : conn) {
    d.merge(fc[c.first.x][c.first.y].second, fc[c.second.x][c.second.y].second);
  }
  int score = 0;
  for (int i = 0; i < computer.size(); i++) {
    for (int j = i + 1; j < computer.size(); j++) {
      if (d.same(i, j)) {
        int x1 = comp[i].x, y1 = comp[i].y;
        int x2 = comp[j].x, y2 = comp[j].y;
        score += (fc[x1][y1].first == fc[x2][y2].first ? 1 : -1);
      }
    }
  }
  return score;
}

// ----- Output and Debug ----- //
queue<pair<move_t, conn_t>> devque;
inline void output(const move_t& move, const conn_t& conn) {
  cout << move.size() << "\n";
  for (auto p : move) {
    printf("%d %d %d %d\n", p.first.x, p.first.y, p.second.x, p.second.y);
  }
  cout << conn.size() << "\n";
  for (auto p : conn) {
    printf("%d %d %d %d\n", p.first.x, p.first.y, p.second.x, p.second.y);
  }
#ifdef LOCAL
  if (!devque.empty()) {
    auto [mov, con] = devque.front();
    devque.pop();
    output(mov, con);
  }
#endif
}
inline void Deb(const move_t& move, const conn_t& conn) {
#ifdef LOCAL
  devque.push({ move, conn });
#endif
}

// ----- Main ----- //
int main() {
  // Timer
  timer.start();
  timer.show("start");

  // Input
  {
    cin >> n >> k;
    field.assign(n + 1, vector<pair<int, int>>(n + 1, { -1, -1 }));
    rep(i, n) rep(j, n) {
      char ch;
      cin >> ch;
      field[i][j].first = ch - '0';
      if (ch > '0') {
        field[i][j].second = computer.size();
        computer.push_back(Point(i, j));
      }
    }
  }
  // Debug(n, k);
  const int MaxTurn = 100 * k;
  timer.show("input");
  vector compkind(computer.size(), vector<int>(k, 0));
  rep(i, computer.size()) {
    compkind[i][field[computer[i].x][computer[i].y].first - 1] = 1;
  }
  timer.show("compkind");

  // Solve
  pair<int, int> cnt = { 0, 0 };
  tuple ans = { 0, move_t(), conn_t() };

  while (timer.check()) {
    // vector cp(get<3>(ans));
    vector cp(field);
    vector comp(computer);
    dsu d(computer.size());
    vector compkindcnt(compkind);
    timer.show("init");

    move_t move;
    conn_t conn;

    // random move
    if (cnt.first != 0) {
      timer.show("random move start");
      int r = randint(1, MaxTurn - get<2>(ans).size());
      while (move.size() < r) {
        int i = randint(0, comp.size() - 1);
        vector<Point> nxtCand(0);
        {
          for (auto d : dir) {
            Point nxt = comp[i] + d;
            if (nxt.outside()) continue;
            if (cp[nxt.x][nxt.y].first == 0) {
              nxtCand.push_back(nxt);
            }
          }
        }
        if (nxtCand.empty()) continue;
        int d = randint(0, nxtCand.size() - 1);
        Point nxt = nxtCand[d];
        swap(cp[comp[i].x][comp[i].y], cp[nxt.x][nxt.y]);
        move.push_back({ comp[i], nxt });
        comp[i] = nxt;
      }
      timer.show("random move end");
    }
    timer.show("random move");

    // simulate
    rep(i, n) rep(j, n) {
      if (cp[i][j].first <= 0) continue;
      // tate
      for (int a = i + 1; a <= n; ++a) {
        if (cp[a][j].first == 0) {
          cp[a][j].first = -100 - cp[i][j].first;
          cp[a][j].second = conn.size();
          continue;
        }
        else if (cp[a][j].first == cp[i][j].first && !d.same(cp[i][j].second, cp[a][j].second)) {
          conn.push_back({ Point(i, j), Point(a, j) });
          vector<int> tmp(k, 0);
          rep(b, k) {
            tmp[b] = compkindcnt[d.leader(cp[a][j].second)][b] + compkindcnt[d.leader(cp[i][j].second)][b];
          }
          d.merge(cp[i][j].second, cp[a][j].second);
          compkindcnt[d.leader(cp[i][j].second)] = tmp;
        }
        // revert
        else {
          for (int l = a - 1; l >= i + 1; l--) cp[l][j] = { 0, -1 };
        }
        break;
      }
      // yoko
      for (int a = j + 1; a <= n; ++a) {
        if (cp[i][a].first == 0) {
          cp[i][a].first = -200 - cp[i][j].first;
          cp[i][a].second = conn.size();
          continue;
        }
        else if (cp[i][j].first == cp[i][a].first && !d.same(cp[i][j].second, cp[i][a].second)) {
          conn.push_back({ Point(i, j), Point(i, a) });
          vector<int> tmp(k, 0);
          rep(b, k) {
            tmp[b] = compkindcnt[d.leader(cp[i][a].second)][b] + compkindcnt[d.leader(cp[i][j].second)][b];
          }
          d.merge(cp[i][j].second, cp[i][a].second);
          compkindcnt[d.leader(cp[i][j].second)] = tmp;
        }
        // revert
        else {
          for (int l = a - 1; l >= j + 1; l--) cp[i][l] = { 0, -1 };
        }
        break;
      }
    }
    timer.show("simulate");

    int score = 0;
    {
      score = 0;
      auto g = d.groups();
      for (auto p : g) score += Combi2(p.size());
      int tmp = 0;
      for (auto p : g) {
        rep(b, k) {
          tmp += Combi2(compkindcnt[d.leader(p[0])][b]);
        }
      }
    }

    auto ansupd = [&]() {
      // Debug(_move.size(), _conn.size(), MaxTurn);
      if (move.size() + conn.size() > MaxTurn) return;
      if (score >= get<0>(ans)) {
        get<0>(ans) = score;
        get<1>(ans) = move;
        get<2>(ans) = conn;
        // swap(get<3>(ans), cp);
        Deb(move, conn);
        cnt.second++;
      }
      cnt.first++;
    };
    ansupd();

    // while (true) {
    //   bool changed = false;
    //   rep(i, comp.size()) {
    //     if (d.size(i) > 1) break;
    //     auto com = comp[i];
    //     for (auto di : dir) {
    //       Point nxt = com + di;
    //       if (nxt.outside()) continue;
    //       if (conn.size() + move.size() + 2 > MaxTurn) break;
    //       if (cp[nxt.x][nxt.y].first == -100 - 100 * (!di.y) - cp[com.x][com.y].first) {
    //         auto [siten, syuuten] = conn[cp[nxt.x][nxt.y].second];
    //         const Point oldsyuuten = syuuten;
    //         move.push_back({ com, nxt });
    //         conn.push_back({ nxt, syuuten });
    //         syuuten = nxt;

    //         // vector<int> tmp(k, 0);
    //         // rep(b, k) {
    //         //   tmp[b] = compkindcnt[d.leader(cp[siten.x][siten.y].second)][b] + compkind[d.leader(cp[syuuten.x][syuuten.y].second)][b];
    //         // }
    //         d.merge(cp[siten.x][siten.y].second, cp[syuuten.x][syuuten.y].second);
    //         // compkindcnt[d.leader(cp[siten.x][siten.y].second)] = tmp;

    //         comp[i] = nxt;
    //         swap(cp[nxt.x][nxt.y], cp[com.x][com.y]);
    //         cp[com.x][com.y] = { 0, -1 };
    //         changed = true;
    //       }
    //     }
    //   }
    //   if (!changed) break;
    // }
    // timer.show("move near");

    // {
    //   score = 0;
    //   auto g = d.groups();
    //   for (auto p : g) score += Combi2(p.size());
    // }
    // ansupd();
    // timer.show("score calc");

    pair<int, int> tmpcnt = { 0, 0 };
    rep(i, comp.size()) {
      vector<int> cand(0);
      for (auto di : dir) {
        Point now = comp[i];
        while (true) {
          Point nxt = now + di;
          if (nxt.outside()) break;
          if (cp[nxt.x][nxt.y].first == 0) {
            now = nxt;
          }
          else {
            int t = cp[nxt.x][nxt.y].second;
            if (cp[nxt.x][nxt.y].first > 0 && t >= 0 && !d.same(i, t)) cand.push_back(t);
            break;
          }
        }
      }
      if (conn.size() + move.size() + 2 > MaxTurn) break;
      if (cand.size() == 2) {
        int same1, same2, diff = -1;
        if (cp[comp[cand[0]].x][comp[cand[0]].y].first == cp[comp[cand[1]].x][comp[cand[1]].y].first) {
          same1 = cand[0], same2 = cand[1], diff = i;
        }
        if (diff < 0) continue;
        if (d.same(same1, same2) || d.same(same1, diff) || d.same(same2, diff)) continue;

        vector<int> ckc(k, 0);
        rep(b, k) {
          ckc[b] = compkindcnt[d.leader(cp[comp[same1].x][comp[same1].y].second)][b] + compkindcnt[d.leader(cp[comp[same2].x][comp[same2].y].second)][b] + compkindcnt[d.leader(cp[comp[diff].x][comp[diff].y].second)][b];
        }
        int delta = 0;
        rep(a, k) {
          delta += Combi2(ckc[a]);
          delta -= Combi2(compkindcnt[d.leader(cp[comp[same1].x][comp[same1].y].second)][a]);
          delta -= Combi2(compkindcnt[d.leader(cp[comp[same2].x][comp[same2].y].second)][a]);
          delta -= Combi2(compkindcnt[d.leader(cp[comp[diff].x][comp[diff].y].second)][a]);
        }
        rep(a, k) rep(b, k) {
          if (a >= b) continue;
          delta -= ckc[a] * ckc[b];
          delta += compkindcnt[d.leader(cp[comp[same1].x][comp[same1].y].second)][a] * compkindcnt[d.leader(cp[comp[same1].x][comp[same1].y].second)][b];
          delta += compkindcnt[d.leader(cp[comp[same2].x][comp[same2].y].second)][a] * compkindcnt[d.leader(cp[comp[same2].x][comp[same2].y].second)][b];
          delta += compkindcnt[d.leader(cp[comp[diff].x][comp[diff].y].second)][a] * compkindcnt[d.leader(cp[comp[diff].x][comp[diff].y].second)][b];
        }
        // Debug(delta);

        if (delta > 0) {
          if (comp[i].x == comp[cand[0]].x) {
            for (int j = comp[i].y + 1; j < comp[cand[0]].y; ++j) cp[comp[i].x][j] = { -1, -1 };
            for (int j = comp[cand[0]].y + 1; j < comp[i].y; ++j) cp[comp[i].x][j] = { -1, -1 };
          }
          else if (comp[i].y == comp[cand[0]].y) {
            for (int j = comp[i].x + 1; j < comp[cand[0]].x; ++j) cp[j][comp[i].y] = { -1, -1 };
            for (int j = comp[cand[0]].x + 1; j < comp[i].x; ++j) cp[j][comp[i].y] = { -1, -1 };
          }
          else {
            Debug("err0", comp[i], comp[cand[0]]);
            continue;
          }
          if (comp[i].x == comp[cand[1]].x) {
            for (int j = comp[i].y + 1; j < comp[cand[1]].y; ++j) cp[comp[i].x][j] = { -1, -1 };
            for (int j = comp[cand[1]].y + 1; j < comp[i].y; ++j) cp[comp[i].x][j] = { -1, -1 };
          }
          else if (comp[i].y == comp[cand[1]].y) {
            for (int j = comp[i].x + 1; j < comp[cand[1]].x; ++j) cp[j][comp[i].y] = { -1, -1 };
            for (int j = comp[cand[1]].x + 1; j < comp[i].x; ++j) cp[j][comp[i].y] = { -1, -1 };
          }
          else {
            Debug("err1", comp[i], comp[cand[1]]);
            continue;
          }
          score += delta;
          d.merge(same1, same2);
          d.merge(same1, diff);
          compkindcnt[d.leader(same1)] = ckc;
          conn.push_back({ comp[i], comp[cand[0]] });
          conn.push_back({ comp[i], comp[cand[1]] });

          // int tmp = calc_score(move, conn);
          // int motomoto = score - delta;
          // if (score != tmp) {
          //   Debug(motomoto, score, tmp, tmp - motomoto, delta, ckc);
          //   Debug(tmp - score);
          //   swap(score, tmp);
          //   tmpcnt.second++;
          // }
          // else {
          //   tmpcnt.first++;
          // }
        }
      }
    }
    // Debug(tmpcnt);
    timer.show("diff connect");
    ansupd();

    timer.show("end");
  }

  // Output
  cerr << "Compared: " << cnt.first << "\n";
  cerr << "Swapped: " << cnt.second << "\n";
  cerr << "Score: " << get<0>(ans) << "\n";
  output(get<1>(ans), get<2>(ans));
#ifdef LOCAL
  output(get<1>(ans), get<2>(ans));
#endif
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc013/submissions/33914944
 * Submitted at: 2022-08-10 13:50:47
 * Problem URL: https://atcoder.jp/contests/ahc013/tasks/ahc013_a
 * Result: AC
 * Execution Time: 2884 ms
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

// ----- Global Variables ----- //
int n = 0, k;
vector c(n, vector<int>(n));

// ----- Structures ----- //
struct Point {
  int x, y;
  Point(): x(0), y(0) {}
  Point(int x, int y): x(x), y(y) {}
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
  pair<int, int> left, right, up, down;
};
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
};

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

// ----- Calc Score ----- //
struct UnionFind {
  map<pair<int, int>, pair<int, int>> parent;
  UnionFind(): parent() {}
  pair<int, int> find(pair<int, int> x) {
    if (parent.find(x) == parent.end()) {
      parent[x] = x;
      return x;
    }
    else if (parent[x] == x) {
      return x;
    }
    else {
      parent[x] = find(parent[x]);
      return parent[x];
    }
  }
  void unite(pair<int, int> x, pair<int, int> y) {
    x = find(x);
    y = find(y);
    if (x != y) { parent[x] = y; }
  }
};
inline int calc_score(const move_t& move, const conn_t& conn, const vector<vector<int>>& cp) {
  if (move.size() + conn.size() > 100 * k) return 0;

  UnionFind uf;
  for (auto r : conn) {
    pair<int, int> p1(r.first.to_pair()), p2(r.second.to_pair());
    uf.unite(p1, p2);
  }

  vector<pair<int, int>> computers;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (cp[i][j] > 0) {
        computers.emplace_back(i, j);
      }
    }
  }

  int score = 0;
  for (int i = 0; i < computers.size(); i++) {
    for (int j = i + 1; j < computers.size(); j++) {
      auto c1 = computers[i];
      auto c2 = computers[j];
      if (uf.find(c1) == uf.find(c2)) {
        score += (cp[c1.first][c1.second] == cp[c2.first][c2.second]) ? 1 : -1;
      }
    }
  }

  return max(score, 0);
}

// ----- Output and Debug ----- //
queue<pair<move_t, conn_t>> devque;
inline void output(const move_t& move, const conn_t& conn) {
  cout << move.size() << endl;
  for (auto p : move) {
    printf("%d %d %d %d\n", p.first.x, p.first.y, p.second.x, p.second.y);
  }
  cout << conn.size() << endl;
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
  Timer timer;
  timer.start();

  // Input
  {
    cin >> n >> k;
    c.assign(n + 1, vector<int>(n + 1, -1));
    rep(i, n) rep(j, n) {
      char ch;
      cin >> ch;
      c[i][j] = ch - '0';
    }
  }

  // Solve
  pair<int, int> cnt = { 0, 0 };
  tuple ans = { 0, move_t(), conn_t(), vector(c) };

  while (timer.check()) {
    // vector cp(get<3>(ans));
    vector cp(c);
    vector<Point> comp(0);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (cp[i][j] == -1) cp[i][j] = 0;
        if (cp[i][j] > 0) comp.emplace_back(i, j);
      }
    }

    move_t move;
    conn_t conn;

    if (cnt.first != 0) {
      int r = randint(1, 100 * k - get<2>(ans).size());
      while (move.size() < r) {
        int i = randint(0, comp.size() - 1);
        int d = randint(0, 3);
        Point nxt = comp[i] + dir[d];
        if (nxt.x < 0 || nxt.x >= n || nxt.y < 0 || nxt.y >= n) continue;
        if (cp[nxt.x][nxt.y] == 0) {
          swap(cp[comp[i].x][comp[i].y], cp[nxt.x][nxt.y]);
          move.emplace_back(comp[i], nxt);
          comp[i] = nxt;
        }
      }
    }

    rep(i, n) rep(j, n) {
      if (cp[i][j] <= 0) continue;
      for (int k = i + 1; k <= n; ++k) {
        if (cp[k][j] == 0) {
          cp[k][j] = -1;
          continue;
        }
        else if (cp[k][j] == cp[i][j]) {
          conn.push_back({ Point(i, j), Point(k, j) });
        }
        else {
          for (int l = k - 1; l >= i + 1; l--) cp[l][j] = 0;
        }
        break;
      }
      for (int k = j + 1; k <= n; ++k) {
        if (cp[i][k] == 0) {
          cp[i][k] = -1;
          continue;
        }
        else if (cp[i][j] == cp[i][k]) {
          conn.push_back({ Point(i, j), Point(i, k) });
        }
        else {
          for (int l = k - 1; l >= j + 1; l--) cp[i][l] = 0;
        }
        break;
      }
    }

    int score = calc_score(move, conn, cp);
    if (score >= get<0>(ans)) {
      swap(get<0>(ans), score);
      swap(get<1>(ans), move);
      swap(get<2>(ans), conn);
      swap(get<3>(ans), cp);
      Deb(move, conn);
      cnt.second++;
    }
    cnt.first++;
  }

  // Output
  cerr << "Compared: " << cnt.first << endl;
  cerr << "Swapped: " << cnt.second << endl;
  output(get<1>(ans), get<2>(ans));
  return 0;
}
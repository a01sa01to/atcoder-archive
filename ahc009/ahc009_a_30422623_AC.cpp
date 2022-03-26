/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc009/submissions/30422623
 * Submitted at: 2022-03-26 18:45:46
 * Problem URL: https://atcoder.jp/contests/ahc009/tasks/ahc009_a
 * Result: AC
 * Execution Time: 1858 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

constexpr int n = 20;
int sx, sy, tx, ty;
double p;

struct Cell {
  bool u = false, d = false, l = false, r = false;
  Cell(bool u, bool d, bool l, bool r): u(u), d(d), l(l), r(r) {}
};

int random_int(int l, int r) {
  auto rd = random_device();
  auto mt = mt19937(rd());
  uniform_int_distribution<int> dist(l, r);
  return dist(mt);
}

string neighbor(string s) {
  int r = random_int(0, s.size() - 1);
  int d = random_int(0, 3);
  if (d == 0) s[r] = 'U';
  if (d == 1) s[r] = 'D';
  if (d == 2) s[r] = 'L';
  if (d == 3) s[r] = 'R';
  return s;
}

void solveProb(const string& t, const vector<vector<Cell>>& wall, vector<vector<double>>& prob) {
  rep(turn, t.size()) {
    vector tmp(n, vector<double>(n, 0));
    tmp[tx][ty] = prob[tx][ty];
    rep(i, n) rep(j, n) {
      if (i == tx && j == ty) continue;
      if (t[turn] == 'U') {
        if (wall[i][j].u) {
          tmp[i][j] += prob[i][j];
        }
        else {
          tmp[i - 1][j] += prob[i][j] * (1 - p);
          tmp[i][j] += prob[i][j] * p;
        }
      }
      if (t[turn] == 'D') {
        if (wall[i][j].d) {
          tmp[i][j] += prob[i][j];
        }
        else {
          tmp[i + 1][j] += prob[i][j] * (1 - p);
          tmp[i][j] += prob[i][j] * p;
        }
      }
      if (t[turn] == 'L') {
        if (wall[i][j].l) {
          tmp[i][j] += prob[i][j];
        }
        else {
          tmp[i][j - 1] += prob[i][j] * (1 - p);
          tmp[i][j] += prob[i][j] * p;
        }
      }
      if (t[turn] == 'R') {
        if (wall[i][j].r) {
          tmp[i][j] += prob[i][j];
        }
        else {
          tmp[i][j + 1] += prob[i][j] * (1 - p);
          tmp[i][j] += prob[i][j] * p;
        }
      }
    }
    swap(prob, tmp);
  }
}

double calcState(const string& t, const vector<vector<Cell>>& wall) {
  vector prob(n, vector<double>(n, 0));
  prob[sx][sy] = 1;
  solveProb(t, wall, prob);
  return prob[tx][ty];
}

string solve(int s_x, int s_y, vector<vector<Cell>>& wall) {
  auto inRange = [&](int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
  };
  queue<tuple<int, int, string>> q;
  vector visited(n, vector<bool>(n, false));
  q.push({ s_x, s_y, "" });
  visited[s_x][s_y] = true;
  while (!q.empty()) {
    auto [x, y, s] = q.front();
    q.pop();
    if (x == tx && y == ty) {
      return s;
    }
    if (!wall[x][y].u && inRange(x - 1, y) && !visited[x - 1][y]) {
      q.push({ x - 1, y, s + "U" });
      visited[x - 1][y] = true;
    }
    if (!wall[x][y].d && inRange(x + 1, y) && !visited[x + 1][y]) {
      q.push({ x + 1, y, s + "D" });
      visited[x + 1][y] = true;
    }
    if (!wall[x][y].l && inRange(x, y - 1) && !visited[x][y - 1]) {
      q.push({ x, y - 1, s + "L" });
      visited[x][y - 1] = true;
    }
    if (!wall[x][y].r && inRange(x, y + 1) && !visited[x][y + 1]) {
      q.push({ x, y + 1, s + "R" });
      visited[x][y + 1] = true;
    }
  }
  return "";
}

int main() {
  auto start = chrono::system_clock::now();

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // Input
  cin >> sx >> sy >> tx >> ty >> p;
  vector wall(n, vector<Cell>(n, Cell(false, false, false, false)));
  rep(i, n) rep(j, n - 1) {
    char c;
    cin >> c;
    if (c == '1') {
      wall[i][j].r = true;
      wall[i][j + 1].l = true;
    }
  }
  rep(i, n - 1) rep(j, n) {
    char c;
    cin >> c;
    if (c == '1') {
      wall[i][j].d = true;
      wall[i + 1][j].u = true;
    }
  }
  rep(i, n) {
    wall[i][0].l = true;
    wall[i][n - 1].r = true;
  }
  rep(i, n) {
    wall[0][i].u = true;
    wall[n - 1][i].d = true;
  }

  // Solve
  string ans = "";
  double best = 0;
  {  // Step1
    vector prob(n, vector<double>(n, 0));
    prob[sx][sy] = 1;
    int nx = sx, ny = sy;
    priority_queue<tuple<double, int, int>> pq;
    while (true) {
      string t = solve(nx, ny, wall);
      Debug(t);
      if (t.size() != 0 && ans.size() + t.size() <= 200) {
        ans += t;
        solveProb(t, wall, prob);
        priority_queue<tuple<double, int, int>> tpq;
        swap(pq, tpq);
        rep(i, n) rep(j, n) {
          if (i != tx && j != ty) {
            pq.push({ prob[i][j], i, j });
          }
        }
        nx = get<1>(pq.top());
        ny = get<2>(pq.top());
        pq.pop();
      }
      else if (!pq.empty()) {
        nx = get<1>(pq.top());
        ny = get<2>(pq.top());
        pq.pop();
      }
      else {
        break;
      }
    }
  }
  best = calcState(ans, wall);
  while (true) {  // Step2
    auto now = chrono::system_clock::now();
    if (chrono::duration_cast<chrono::milliseconds>(now - start).count() > 1850) { break; }
    string t = neighbor(ans);
    double tmp = calcState(t, wall);
    if (tmp > best) {
      best = tmp;
      swap(ans, t);
    }
  }
  Debug(calcState(ans, wall));
  cout << ans << endl;
  return 0;
}
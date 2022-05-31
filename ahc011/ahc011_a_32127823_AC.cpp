/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc011/submissions/32127823
 * Submitted at: 2022-05-31 19:16:22
 * Problem URL: https://atcoder.jp/contests/ahc011/tasks/ahc011_a
 * Result: AC
 * Execution Time: 2909 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef unsigned int uint;
typedef long long ll;
typedef vector<vector<uint>> grid_t;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int n, t;
grid_t Grid;

constexpr uint Left = 1;
constexpr uint Up = 2;
constexpr uint Right = 4;
constexpr uint Down = 8;
struct Timer {
  private:
  chrono::_V2::system_clock::time_point st;

  public:
  void start() {
    st = chrono::system_clock::now();
  }
  int step = 0;
  bool check() {
    auto now = chrono::system_clock::now();
    int diff = chrono::duration_cast<chrono::milliseconds>(now - st).count();
    switch (step) {
      case 1:
        return diff <= 1500;
      case 2:
        return diff <= 2900;
      default:
        return false;
    }
  }
};
Timer timer;

inline grid_t Simulate(const string& s) {
  grid_t ret = Grid;
  int x = 0, y = 0;
  rep(i, n) rep(j, n) if (ret[i][j] == 0) x = i, y = j;
  rep(i, s.size()) {
    switch (s[i]) {
      case 'L':
        if (y == 0) {
          return {};
        }
        swap(ret[x][y], ret[x][y - 1]);
        --y;
        break;
      case 'U':
        if (x == 0) {
          return {};
        }
        swap(ret[x][y], ret[x - 1][y]);
        --x;
        break;
      case 'R':
        if (y == n - 1) {
          return {};
        }
        swap(ret[x][y], ret[x][y + 1]);
        ++y;
        break;
      case 'D':
        if (x == n - 1) {
          return {};
        }
        swap(ret[x][y], ret[x + 1][y]);
        ++x;
        break;
    }
  }
  return ret;
}

inline ll calcScore(const string& input) {
  if (input.size() > t) return 0;
  grid_t tiles = Simulate(input);
  if (tiles.size() == 0) return 0;
  dsu d(n * n);
  vector<bool> tree(n * n, true);
  rep(i, n) rep(j, n) {
    if ((i + 1 < n) && (tiles[i][j] & Down) && (tiles[i + 1][j] & Up)) {
      int a = d.leader(i * n + j);
      int b = d.leader((i + 1) * n + j);
      if (a == b) {
        tree[a] = false;
      }
      else {
        int t = tree[a] && tree[b];
        d.merge(a, b);
        tree[d.leader(a)] = t;
      }
    }
    if ((j + 1 < n) && (tiles[i][j] & Right) && (tiles[i][j + 1] & Left)) {
      int a = d.leader(i * n + j);
      int b = d.leader(i * n + j + 1);
      if (a == b) {
        tree[a] = false;
      }
      else {
        int t = tree[a] && tree[b];
        d.merge(a, b);
        tree[d.leader(a)] = t;
      }
    }
  }
  int max_tree = -1;
  rep(i, n) rep(j, n) {
    if (tiles[i][j] != 0 && tree[d.leader(i * n + j)]) {
      if (max_tree == -1 || d.size(max_tree) < d.size(i * n + j)) {
        max_tree = i * n + j;
      }
    }
  }
  vector bs(n, vector<bool>(n, false));
  if (max_tree != -1) {
    rep(i, n) rep(j, n) bs[i][j] = d.same(max_tree, i * n + j);
  }
  int size = (max_tree == -1 ? 0 : d.size(max_tree));
  if (size == n * n - 1) {
    return round(5e5 * (2.0 - double(input.size()) / t));
  }
  else {
    return round(5e5 * double(size) / (n * n - 1));
  }
}

// O(3^max_dep)
inline pair<ll, string> dfs(const string& input, const int depth, const uint prev, const int max_depth, int& x, int& y, const ll now_score) {
  pair<ll, string> max_score = { calcScore(input), input };
  if (depth == max_depth) return max_score;
  if (!timer.check()) return max_score;
  if (prev != Right && y - 1 >= 0) {
    --y;
    auto [s, l] = dfs(input + 'L', depth + 1, Left, max_depth, x, y, now_score);
    if (s > max_score.first) max_score = { s, l };
    ++y;
  }
  if (prev != Left && y + 1 < n) {
    ++y;
    auto [s, r] = dfs(input + 'R', depth + 1, Right, max_depth, x, y, now_score);
    if (s > max_score.first) max_score = { s, r };
    --y;
  }
  if (prev != Down && x - 1 >= 0) {
    --x;
    auto [s, u] = dfs(input + 'U', depth + 1, Up, max_depth, x, y, now_score);
    if (s > max_score.first) max_score = { s, u };
    ++x;
  }
  if (prev != Up && x + 1 < n) {
    ++x;
    auto [s, d] = dfs(input + 'D', depth + 1, Down, max_depth, x, y, now_score);
    if (s > max_score.first) max_score = { s, d };
    --x;
  }
  return max_score;
}

int main() {
  timer.start();
  timer.step = 1;

  // Input
  cin >> n >> t;
  Grid.resize(n);
  int x = 0, y = 0;
  rep(i, n) {
    Grid[i].resize(n);
    rep(j, n) {
      char c;
      cin >> c;
      Grid[i][j] = c - (isdigit(c) ? '0' : 'a' - 10);
      if (Grid[i][j] == 0) x = i, y = j;
    }
  }

  // Solve Step1 (DFS, to 1500ms)
  string ans = "";
  ll nowScore = calcScore("");
  do {
    auto [sc, s] = dfs("", 0, 0, min(10, t - int(ans.size())), x, y, nowScore);
    if (s.size() == 0) break;
    Grid = Simulate(s);
    ans += s;
    swap(nowScore, sc);
  } while (ans.size() < t);

  timer.step = 2;

  // Solve Step2 (BFS, to 2900ms)
  priority_queue<tuple<int, string, int, int>> pq;
  pq.emplace(nowScore, ans, x, y);
  int cnt = 0;
  while (true) {
    if (!timer.check()) break;
    priority_queue<tuple<int, string, int, int>> nxt;
    while (!pq.empty()) {
      if (!timer.check()) break;
      if (pq.size() > 100) {
        priority_queue<tuple<int, string, int, int>> tmp;
        while (tmp.size() < 100) {
          tmp.push(pq.top());
          pq.pop();
        }
        swap(pq, tmp);
      }

      auto [sc, s, nx, ny] = pq.top();
      cnt++;
      if (nowScore < sc) {
        nowScore = sc;
        ans = s;
        x = nx;
        y = ny;
      }
      pq.pop();
      if (s.back() != 'L' && ny < n - 1) {
        string ns = s + "R";
        nxt.push({ calcScore(ns), ns, nx, ny + 1 });
      }
      if (s.back() != 'R' && ny > 0) {
        string ns = s + "L";
        nxt.push({ calcScore(ns), ns, nx, ny - 1 });
      }
      if (s.back() != 'U' && nx < n - 1) {
        string ns = s + "D";
        nxt.push({ calcScore(ns), ns, nx + 1, ny });
      }
      if (s.back() != 'D' && nx > 0) {
        string ns = s + "U";
        nxt.push({ calcScore(ns), ns, nx - 1, ny });
      }
    }
    swap(pq, nxt);
  }
  cout << ans << endl;
  return 0;
}
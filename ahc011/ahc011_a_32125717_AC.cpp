/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc011/submissions/32125717
 * Submitted at: 2022-05-31 17:05:31
 * Problem URL: https://atcoder.jp/contests/ahc011/tasks/ahc011_a
 * Result: AC
 * Execution Time: 2908 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef unsigned int uint;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int n, t;
vector<vector<bitset<4>>> Grid;

constexpr bitset<4> Left = 1;
constexpr bitset<4> Up = 2;
constexpr bitset<4> Right = 4;
constexpr bitset<4> Down = 8;
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

inline void ReinitGrid(int& x, int& y, const string& s) {
  rep(i, n) rep(j, n) if (Grid[i][j] == 0) x = i, y = j;
  rep(i, s.size()) {
    switch (s[i]) {
      case 'L':
        assert(y != 0);
        swap(Grid[x][y], Grid[x][y - 1]);
        --y;
        break;
      case 'U':
        assert(x != 0);
        swap(Grid[x][y], Grid[x - 1][y]);
        --x;
        break;
      case 'R':
        assert(y != n - 1);
        swap(Grid[x][y], Grid[x][y + 1]);
        ++y;
        break;
      case 'D':
        assert(x != n - 1);
        swap(Grid[x][y], Grid[x + 1][y]);
        ++x;
        break;
    }
  }
}

inline ll calcScore(const string& input) {
  if (input.size() > t) return 0;
  vector tiles(n, vector<bitset<4>>(n, 0));
  {  // Simulation
    int x = 0, y = 0;
    rep(i, n) rep(j, n) {
      tiles[i][j] = Grid[i][j];
      if (Grid[i][j] == 0) x = i, y = j;
    }
    rep(i, input.size()) {
      switch (input[i]) {
        case 'L':
          if (y == 0) return 0;
          swap(tiles[x][y], tiles[x][y - 1]);
          --y;
          break;
        case 'U':
          if (x == 0) return 0;
          swap(tiles[x][y], tiles[x - 1][y]);
          --x;
          break;
        case 'R':
          if (y == n - 1) return 0;
          swap(tiles[x][y], tiles[x][y + 1]);
          ++y;
          break;
        case 'D':
          if (x == n - 1) return 0;
          swap(tiles[x][y], tiles[x + 1][y]);
          ++x;
          break;
        default:
          return 0;
      }
    }
  }
  dsu d(n * n);
  vector<bool> tree(n * n, true);
  rep(i, n) rep(j, n) {
    if ((i + 1 < n) && (tiles[i][j] & Down).count() && (tiles[i + 1][j] & Up).count()) {
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
    if ((j + 1 < n) && (tiles[i][j] & Right).count() && (tiles[i][j + 1] & Left).count()) {
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
inline pair<ll, string> dfs(const string& input, const int depth, const bitset<4> prev, const int max_depth, int& x, int& y, const ll now_score) {
  if (depth == max_depth) return { calcScore(input), input };
  if (!timer.check()) return { calcScore(input), input };
  pair<ll, string> max_score = { now_score, "" };
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
    ReinitGrid(x, y, s);
    ans += s;
    swap(nowScore, sc);
  } while (ans.size() < t);

  timer.step = 2;

  // Solve Step2 (BFS, to 2900ms)
  priority_queue<tuple<int, string, int, int>> pq;
  pq.emplace(nowScore, ans, x, y);
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
    if (nowScore < sc) {
      nowScore = sc;
      ans = s;
      x = nx;
      y = ny;
    }
    pq.pop();
    if (s.back() != 'L' && ny < n - 1) pq.push({ calcScore(s + 'R'), s + 'R', nx, ny + 1 });
    if (s.back() != 'R' && ny > 0) pq.push({ calcScore(s + 'L'), s + 'L', nx, ny - 1 });
    if (s.back() != 'U' && nx < n - 1) pq.push({ calcScore(s + 'D'), s + 'D', nx + 1, ny });
    if (s.back() != 'D' && nx > 0) pq.push({ calcScore(s + 'U'), s + 'U', nx - 1, ny });
  }

  cout << ans << endl;
  return 0;
}
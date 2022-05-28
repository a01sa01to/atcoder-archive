/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc011/submissions/32061993
 * Submitted at: 2022-05-28 23:38:46
 * Problem URL: https://atcoder.jp/contests/ahc011/tasks/ahc011_a
 * Result: AC
 * Execution Time: 2090 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef unsigned int uint;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int n, t;
vector<vector<int>> Grid;

constexpr uint Left = 1;
constexpr uint Up = 2;
constexpr uint Right = 4;
constexpr uint Down = 8;

// O(n*n)
ll calcScore(const string& input) {
  if (input.size() > t) return 0;
  vector tiles(n, vector<int>(n, 0));
  rep(i, n) rep(j, n) tiles[i][j] = Grid[i][j];
  {  // Simulation
    int x = 0, y = 0;
    rep(i, n) rep(j, n) if (Grid[i][j] == 0) x = i, y = j;
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
  // rep(i, n) {
  //   cout << "[DEBUG] ";
  //   rep(j, n) {
  //     string t = " ";
  //     switch (tiles[i][j]) {
  //       case 1: t = "←"; break;
  //       case 2: t = "↑"; break;
  //       case 3: t = "┘"; break;
  //       case 4: t = "→"; break;
  //       case 5: t = "─"; break;
  //       case 6: t = "└"; break;
  //       case 7: t = "┴"; break;
  //       case 8: t = "↓"; break;
  //       case 9: t = "┐"; break;
  //       case 10: t = "│"; break;
  //       case 11: t = "┤"; break;
  //       case 12: t = "┌"; break;
  //       case 13: t = "┬"; break;
  //       case 14: t = "├"; break;
  //       case 15: t = "┼"; break;
  //     }
  //     cout << t;
  //   }
  //   cout << endl;
  // }
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
pair<ll, string> dfs(const string& input, const int depth, const uint prev, const int max_depth, int& x, int& y, const ll now_score) {
  if (depth == max_depth) return { calcScore(input), input };
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
  auto start = chrono::system_clock::now();

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

  // Solve
  // Initial state
  string ans = "";
  ll nowScore = calcScore("");
  do {
    auto [sc, s] = dfs(ans, 0, 0, min(10, t - int(ans.size())), x, y, nowScore);
    if (s.size() == 0) break;
    string added = s.substr(ans.size());
    rep(i, added.size()) {
      if (added[i] == 'L') --y;
      if (added[i] == 'R') ++y;
      if (added[i] == 'U') --x;
      if (added[i] == 'D') ++x;
    }
    swap(ans, s);
    swap(nowScore, sc);
  } while (ans.size() < t);
  cout << ans << endl;
  return 0;
}
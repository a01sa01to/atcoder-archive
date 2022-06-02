/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc011/submissions/32153922
 * Submitted at: 2022-06-02 11:52:16
 * Problem URL: https://atcoder.jp/contests/ahc011/tasks/ahc011_a
 * Result: AC
 * Execution Time: 2918 ms
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
    return diff <= 2800;
  }
};
Timer timer;
struct State {
  ll score;
  string output;
  int x, y;
  State(ll score, string output, int x, int y): score(score), output(output), x(x), y(y) {}
  State(): score(0), output(""), x(0), y(0) {}

  bool operator<(const State& rhs) const {
    return score < rhs.score;
  }
  void operator=(const State& rhs) {
    score = rhs.score;
    output = rhs.output;
    x = rhs.x;
    y = rhs.y;
  }
  bool operator==(const State& rhs) const {
    return score == rhs.score;
  }
};

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

inline double calcScore(const string& input) {
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
        bool t = tree[a] && tree[b];
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
        bool t = tree[a] && tree[b];
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
    return (5e5 * (2.0 - double(input.size()) / t));
  }
  else {
    int s = d.groups().size() - 1;
    assert(s != 0);
    // return -s;
    return (5e5 * double(size) / (n * n - 1) - 2 * s);
  }
}

inline State ChokudaiSearch(State FirstState) {
  vector<priority_queue<State>> HStates(t + 1);
  HStates[0].push(FirstState);
  int ChokudaiWidth = 3;
  while (timer.check()) {
    for (int turn = 0; turn < t; turn++) {
      for (int i = 0; i < ChokudaiWidth; i++) {
        if (HStates[turn].empty()) break;
        State NowState = HStates[turn].top();
        HStates[turn].pop();
        if (NowState.x < n - 1 && NowState.output.back() != 'U') {
          State NextState = State(0, NowState.output + 'D', NowState.x + 1, NowState.y);
          NextState.score = calcScore(NextState.output);
          HStates[turn + 1].push(NextState);
        }
        if (NowState.y < n - 1 && NowState.output.back() != 'L') {
          State NextState = State(0, NowState.output + 'R', NowState.x, NowState.y + 1);
          NextState.score = calcScore(NextState.output);
          HStates[turn + 1].push(NextState);
        }
        if (NowState.x > 0 && NowState.output.back() != 'D') {
          State NextState = State(0, NowState.output + 'U', NowState.x - 1, NowState.y);
          NextState.score = calcScore(NextState.output);
          HStates[turn + 1].push(NextState);
        }
        if (NowState.y > 0 && NowState.output.back() != 'R') {
          State NextState = State(0, NowState.output + 'L', NowState.x, NowState.y - 1);
          NextState.score = calcScore(NextState.output);
          HStates[turn + 1].push(NextState);
        }
      }
    }
  }
  return HStates[t].top();
}

int main() {
  timer.start();

  // Input
  cin >> n >> t;
  Grid.reserve(n);
  Grid.resize(n);
  int x = 0, y = 0;
  rep(i, n) {
    Grid[i].reserve(n);
    Grid[i].resize(n);
    rep(j, n) {
      char c;
      cin >> c;
      Grid[i][j] = c - (isdigit(c) ? '0' : 'a' - 10);
      if (Grid[i][j] == 0) x = i, y = j;
    }
  }

  // Solve
  State ans = ChokudaiSearch(State(calcScore(""), "", x, y));
  cout << ans.output << endl;
  return 0;
}
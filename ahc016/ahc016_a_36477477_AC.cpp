/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc016/submissions/36477477
 * Submitted at: 2022-11-13 21:55:38
 * Problem URL: https://atcoder.jp/contests/ahc016/tasks/ahc016_a
 * Result: AC
 * Execution Time: 52 ms
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

// Typedef
using graph_t = vector<vector<int>>;

// Const & Var
constexpr int n = 100;                    // 頂点数
constexpr int edges = (n * (n - 1)) / 2;  // 辺の数
constexpr int mMax = 100;                 // QueryMax
constexpr double Pi = 3.14159265358979323846;
int m;
double eps;

vector<pair<graph_t, int>> Graphs(0);

// Utils
inline double N(const double delta, const double sigma) {
  if (sigma == 0) return (delta == 0);
  return 1 / sqrt(2 * Pi * sigma * sigma) * exp(-1 * delta * delta / (2 * sigma * sigma));
}
inline string graph2str(const graph_t& Graph) {
  vector newGraph(n, vector<bool>(n, false));
  rep(i, n) {
    for (int j : Graph[i]) {
      newGraph[i][j] = true;
      newGraph[j][i] = true;
    }
  }
  string ret = "";
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      ret += newGraph[i][j] ? '1' : '0';
    }
  }
  return ret;
}
inline graph_t str2graph(const string& str) {
  graph_t ret(n);
  int idx = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (str[idx++] == '1') {
        ret[i].push_back(j);
        ret[j].push_back(i);
      }
    }
  }
  return ret;
}

// Main
inline void GenerateGraphs() {
  int idx = 0;
  for (int zeros = 0; zeros <= edges; zeros += edges / m) {
    int ones = edges - zeros;
    Graphs[idx].second = ones;
    Graphs[idx++].first = str2graph(string(zeros, '0') + string(ones, '1'));
    // rep(i, edges + 1) {
    //   // 辺の数が ones -> i になる確率
    //   rep(j, ones + 1) {
    //     // 1 -> 0 に変わる: j個
    //     // 0 -> 1 に変わる: i - j個
    //     Graphs[idx].second[i] += N((i - j) - zeros * eps, zeros * eps * (1 - eps)) * N(j - ones * eps, ones * eps * (1 - eps));
    //   }
    // }
    if (idx >= m) break;
  }

  // 出力
  cout << n << endl;
  for (int i = 0; i < m; i++) {
    cout << graph2str(Graphs[i].first) << endl;
  }
}

inline void solve(const graph_t& Graph) {
  // まずは辺を数える
  int edge = 0;
  for (int i = 0; i < n; i++) edge += Graph[i].size();
  edge /= 2;
  // Debug(edge);
  // Basicな最尤推定
  pair<double, int> ans = { 0, 0 };
  rep(i, m) {
    int ones = Graphs[i].second;
    int zeros = edges - ones;
    const double zerosSigma = sqrt(zeros * eps * (1 - eps));
    const double onesSigma = sqrt(ones * eps * (1 - eps));
    double prob = N(abs(abs(edges - edge) - zeros) - zeros * eps, zerosSigma) * N(abs(edge - ones) - ones * eps, onesSigma);
    Debug(i, prob);
    if (ans.first < prob) {
      ans.first = prob;
      ans.second = i;
    }
  }
  cout << ans.second << endl;
}

int main() {
  chrono::system_clock::time_point start = chrono::system_clock::now();

  // Input
  cin >> m >> eps;
  Graphs.resize(m);
  rep(i, m) {
    Graphs[i].first.resize(n);
  }

  // Generate Graphs
  GenerateGraphs();

  // Solve
  rep(i, mMax) {
    chrono::system_clock::time_point now = chrono::system_clock::now();
    // if (chrono::duration_cast<chrono::milliseconds>(now - start).count() > 4900) {
    //   cerr << "TimeOut" << endl;
    //   exit(1);
    // }
    string s;
    cin >> s;
    graph_t G = str2graph(s);
    solve(G);
    // cout << i << endl;
  }
  return 0;
}
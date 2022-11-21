/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc016/submissions/36486423
 * Submitted at: 2022-11-14 10:39:42
 * Problem URL: https://atcoder.jp/contests/ahc016/tasks/ahc016_a
 * Result: AC
 * Execution Time: 975 ms
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
constexpr double Pi = 3.14159265358979323846;
int m;
int eps;

vector<pair<graph_t, int>> Graphs(0);

// Utils
inline double N(const double delta, const double sigma) {
  if (sigma == 0) return (delta == 0);
  return 1e20 / sqrt(2 * Pi * sigma * sigma) * exp(-1 * delta * delta / (2 * sigma * sigma));
}
inline string graph2str(const graph_t& Graph) {
  const int n = Graph.size();
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
inline graph_t str2graph(const string& str, const int n) {
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
  const int n = 100;
  const int edges = (n * (n - 1)) / 2;
  const int margin = edges / (m - 1);
  Debug(margin, 4 * sqrt(edges * (100 - eps) * eps / 10000.0));
  rep(idx, m) {
    int zeros = margin * idx;
    int ones = edges - zeros;
    Graphs[idx].second = ones;
    Graphs[idx].first = str2graph(string(zeros, '0') + string(ones, '1'), n);
  }

  // 出力
  cout << n << endl;
  for (int i = 0; i < m; i++) {
    cout << graph2str(Graphs[i].first) << endl;
  }
}

inline void solve(const graph_t& Graph) {
  const int n = Graph.size();
  const int edges = (n * (n - 1)) / 2;
  // まずは辺を数える
  int edge = 0;
  for (int i = 0; i < n; i++) edge += Graph[i].size();
  edge /= 2;
  Debug(n, edge, edges);
  // Basicな最尤推定
  pair<double, int> ans = { 0, 0 };
  rep(i, m) {
    int ones = Graphs[i].second;
    int zeros = edges - ones;
    const double zerosSigma = sqrt(zeros * eps * (100 - eps) / 10000.0);
    const double onesSigma = sqrt(ones * eps * (100 - eps) / 10000.0);
    double prob = 0;
    rep(afterones, ones + 1) {
      // 1 ones個 のうち afterones個 が 0 に変わったときの確率
      // まず少なくとも edge - ones 個は変わる
      // そのとき 1 は ones - afterones個 のはず
      // 0 は zeros + afterones個 になる
      // でも今 1 は edge個 あるので
      // 0 のうち edge - (ones - afterones)個 が 1 に変わる
      // ちょっと違うかも
      prob += N((afterones) - (ones * eps / 100.0), onesSigma) * N((edge - (ones - afterones)) - (zeros * eps / 100.0), zerosSigma);
    }
    Debug(i, ones, zeros, prob);
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
  scanf("%d 0.%d", &m, &eps);
  Debug(m, eps);
  Graphs.resize(m);

  // Generate Graphs
  if (eps == 0) {
    int n = 0;
    rep(i, 22) {
      if (i * (i - 1) / 2 >= m) {
        n = i;
        break;
      }
    }
    const int edges = (n * (n - 1)) / 2;
    rep(i, m) {
      Graphs[i].first = str2graph(string(i, '0') + string(edges - i, '1'), n);
      Graphs[i].second = edges - i;
    }
    cout << n << endl;
    for (int i = 0; i < m; i++) {
      cout << graph2str(Graphs[i].first) << endl;
    }
  }
  else {
    GenerateGraphs();
  }

  // Solve
  rep(i, 100) {
    chrono::system_clock::time_point now = chrono::system_clock::now();
    // if (chrono::duration_cast<chrono::milliseconds>(now - start).count() > 4900) {
    //   cerr << "TimeOut" << endl;
    //   exit(1);
    // }
    string s;
    cin >> s;
    // Debug(i, s);
    if (eps == 0) {
      int n = 0;
      rep(i, 22) {
        if (i * (i - 1) / 2 >= m) {
          n = i;
          break;
        }
      }
      graph_t G = str2graph(s, n);
      solve(G);
    }
    else {
      graph_t G = str2graph(s, 100);
      solve(G);
    }
  }
  return 0;
}
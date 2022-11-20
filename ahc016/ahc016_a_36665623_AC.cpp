/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc016/submissions/36665623
 * Submitted at: 2022-11-20 18:01:11
 * Problem URL: https://atcoder.jp/contests/ahc016/tasks/ahc016_a
 * Result: AC
 * Execution Time: 3927 ms
 */

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("unroll-loops")

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
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

// Typedef
using graph_t = vector<vector<int>>;

// Const & Var
constexpr double Pi = 3.14159265358979323846;
constexpr double Sqrt2 = 1.41421356237309504880;
constexpr int MontecarloLimit = 300;
int n;
int edges;
int m;
int eps;
bool disableDebug = false;

vector<pair<graph_t, vector<int>>> Graphs(0);
vector<map<vector<int>, int>> MonteCnt(0);

// Utils
inline ull xor128() {
  static ull x = 123456789, y = 362436069, z = 521288629, w = 88675123;
  ull t = (x ^ (x << 11));
  x = y;
  y = z;
  z = w;
  return (w = (w ^ (w >> 19)) ^ (t ^ (t >> 8)));
}
inline int randInt(int l, int r) {
  return xor128() % (r - l + 1) + l;
}
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
inline string bit2str(const int bit, const int n) {
  string ret = "";
  for (int i = 0; i < n; i++) {
    ret += (bit & (1 << i)) ? '1' : '0';
  }
  return ret;
}

// Main
inline void MonteCarlo(const graph_t& Graph, const int idx) {
  vector newgraph(n, vector<bool>(n, false));
  rep(i, n) for (int j : Graph[i]) newgraph[i][j] = true;
  string news = "";
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      news += (newgraph[i][j] ^ (randInt(1, 100) <= eps) ? '1' : '0');
    }
  }
  graph_t newGraph = str2graph(news);
  vector<int> newDeg(n);
  rep(i, n) newDeg[i] = newGraph[i].size();
  sort(newDeg.begin(), newDeg.end());
  MonteCnt[idx][newDeg]++;
}

inline void GenerateGraphs0() {
  set<vector<int>> hoge;
  int idx = 0;
  rep(bit, 1 << edges) {
    auto g = str2graph(bit2str(bit, edges));
    vector<int> deg(n);
    rep(i, n) deg[i] = g[i].size();
    sort(deg.begin(), deg.end());
    if (hoge.count(deg)) continue;
    hoge.insert(deg);
    Graphs[idx].first = g;
    Graphs[idx].second = deg;
    rep(_, MontecarloLimit) MonteCarlo(g, idx);
    idx++;
    if (idx >= m) break;
  }
  cout << n << endl;
  for (int i = 0; i < m; i++) {
    cout << graph2str(Graphs[i].first) << endl;
  }
}

inline void solve0(const graph_t& Graph) {
  vector<int> deg(n);
  rep(i, n) deg[i] = Graph[i].size();
  sort(deg.begin(), deg.end());
  rep(i, m) {
    if (Graphs[i].second == deg) {
      cout << i << endl;
      return;
    }
  }
  pair<int, int> best = { -1e9, -1 };
  rep(i, m) {
    int cnt = 0;
    rep(j, n) {
      cnt += (Graphs[i].second[j] - deg[j]) * (Graphs[i].second[j] - deg[j]);
    }
    best = max(best, { -cnt, i });
  }
  cout << best.second << endl;
}

inline void GenerateGraphs() {
  double margin = edges / double(m - 1);
  Debug(n, edges, margin);
  rep(idx, m) {
    int zeros = margin * idx;
    int ones = edges - zeros;
    Graphs[idx].second = { ones };
    auto g = str2graph(string(zeros, '0') + string(ones, '1'));
    Graphs[idx].first = g;
    rep(_, MontecarloLimit) MonteCarlo(g, idx);
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
  vector<int> deg(n);
  rep(i, n) edge += (deg[i] = Graph[i].size());
  edge /= 2;
  if (!disableDebug) Debug(n, edge, edges);
  // Basicな最尤推定
  pair<double, int> ans = { 0, 0 };
  rep(i, m) {
    int ones = Graphs[i].second[0];
    int zeros = edges - ones;
    const double zerosSigma = sqrt(zeros * eps * (100 - eps) / 10000.0);
    const double onesSigma = sqrt(ones * eps * (100 - eps) / 10000.0);
    const double mp = log((MonteCnt[i].count(deg) ? MonteCnt[i][deg] : 0) + 10);
    double prob = 0;
    rep(afterones, ones + 1) {
      // 1 ones個 のうち afterones個 が 0 に変わったときの確率
      // まず少なくとも edge - ones 個は変わる
      // そのとき 1 は ones - afterones個 のはず
      // 0 は zeros + afterones個 になる
      // でも今 1 は edge個 あるので
      // 0 のうち edge - (ones - afterones)個 が 1 に変わる
      // ちょっと違うかも
      prob += mp * N((afterones) - (ones * eps / 100.0), onesSigma) * N((edge - (ones - afterones)) - (zeros * eps / 100.0), zerosSigma);
    }
    if (!disableDebug) Debug(i, ones, zeros, prob);
    if (ans.first < prob) {
      ans.first = prob;
      ans.second = i;
    }
  }
  cout << ans.second << endl;
}

int main(int argc, char* argv[]) {
  if (argc == 2 && strcmp(argv[1], "productionhogehoge") == 0) {
    disableDebug = true;
    cerr << "[info] Debug is disabled" << endl;
  }

  // Input
  scanf("%d 0.%d", &m, &eps);
  Debug(m, eps);
  Graphs.resize(m);
  MonteCnt.resize(m);
  bool shouldGraph0 = (eps <= 3) || (eps >= 37);
  double sigma = sqrt(eps * (100 - eps) / 10000.0);

  // Initialize n
  if (shouldGraph0) {
    if (m <= 11) { n = 4; }
    else if (m <= 31) { n = 5; }
    else { n = 6; }
  }
  else {
    n = 100;
    Debug(6 * Sqrt2 * sigma * (m - 1));
    if (eps <= 25) n = min(n, int(ceil(6 * Sqrt2 * sigma * (m - 1))));
  }
  edges = n * (n - 1) / 2;

  // Generate Graphs
  (shouldGraph0 ? GenerateGraphs0 : GenerateGraphs)();
  // GenerateGraphs0();

  // Solve
  rep(i, 100) {
    string s;
    cin >> s;
    // Debug(i, s);
    graph_t G = str2graph(s);
    (shouldGraph0 ? solve0 : solve)(G);
  }
  return 0;
}
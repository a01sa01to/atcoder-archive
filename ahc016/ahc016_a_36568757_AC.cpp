/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc016/submissions/36568757
 * Submitted at: 2022-11-18 16:23:18
 * Problem URL: https://atcoder.jp/contests/ahc016/tasks/ahc016_a
 * Result: AC
 * Execution Time: 948 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

// Typedef
using graph_t = vector<vector<int>>;

// Const & Var
constexpr double Pi = 3.1415926535897932385;
constexpr double SqrtPi = 1.7724538509055160273;
constexpr double Sqrt2 = 1.4142135623730950488;
constexpr double Sqrt3 = 1.7320508756887729353;
constexpr double Sqrt5 = 2.2360679774997896964;
int n;
int edges;
int m;
int eps;
bool disableDebug = false;

vector<pair<graph_t, vector<int>>> Graphs(0);

// Utils
template<typename T>
constexpr inline T sqr(const T x) { return x * x; }
template<typename T>
constexpr inline T cub(const T x) { return x * x * x; }
inline double NormalDistribution(const double x, const double mean, const double sigma) {
  if (sigma == 0) return (x == mean);
  return 1e20 / sqrt(2 * Pi * sqr(sigma)) * exp(-1 * sqr(x - mean) / (2 * sqr(sigma)));
}
inline double TDistribution(const double x, const double mean, const double sigma, const int n) {
  if (sigma == 0) return (x == mean);

  double s = sqr(sigma) * n / (n - 1);
  double t = (x - mean) / (s / sqrt(double(n)));

  constexpr double mul = 1e10;

  if (n == 4) {
    return 6 * Sqrt3 / Pi / sqr(sqr(t) + 3);
  }
  if (n == 5) {
    return 12 / pow((sqr(t) + 4), 2.5);
  }
  if (n == 6) {
    return 200 * Sqrt5 / 3 / Pi / cub(sqr(x) + 5);
  }

  return mul * tgamma(n / 2.0) / (sqrt((n - 1) * Pi) * tgamma((n - 1) / 2.0)) * pow((1 + sqr(t) / (n - 1)), -n / 2.0);
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
  pair<double, int> best = { -1e9, -1 };
  rep(i, m) {
    vector<int> shuffler(n);
    iota(shuffler.begin(), shuffler.end(), 0);
    do {
      double p = 1;
      rep(j, n) {
        int ones = Graphs[i].second[shuffler[j]];
        int zeros = n - ones;
        const double zerosSigma = sqrt(zeros * eps * (100 - eps) / 10000.0);
        const double onesSigma = sqrt(ones * eps * (100 - eps) / 10000.0);
        double tmp = 0;
        for (int afone = 0; afone <= n; afone++) {
          tmp += TDistribution(afone, ones * eps / 100.0, onesSigma, n) * TDistribution(deg[j] - (ones - afone), zeros * eps / 100.0, zerosSigma, n);
        }
        p *= tmp;
      }
      if (best.first < p) best = { p, i };
    } while (next_permutation(shuffler.begin(), shuffler.end()));
    if (!disableDebug) Debug(i, best);
    // int cnt = 0;
    // rep(j, n) {
    //   cnt += (Graphs[i].second[j] - deg[j]) * (Graphs[i].second[j] - deg[j]);
    // }
    // best = max(best, { -cnt, i });
  }
  cout << best.second << endl;
}

inline void GenerateGraphs() {
  double margin = edges / double(m - 1);
  rep(idx, m) {
    int zeros = margin * idx;
    int ones = edges - zeros;
    Graphs[idx].second = { ones };
    Graphs[idx].first = str2graph(string(zeros, '0') + string(ones, '1'));
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
  if (!disableDebug) Debug(n, edge, edges);
  // Basicな最尤推定
  pair<double, int> ans = { 0, 0 };
  rep(i, m) {
    int ones = Graphs[i].second[0];
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
      prob += NormalDistribution((afterones), (ones * eps / 100.0), onesSigma) * NormalDistribution((edge - (ones - afterones)), (zeros * eps / 100.0), zerosSigma);
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
  cin.tie(nullptr)->sync_with_stdio(false);

  if (argc == 2 && strcmp(argv[1], "productionhogehoge") == 0) {
    disableDebug = true;
    cerr << "[info] Debug is disabled" << endl;
  }

  // Input
  scanf("%d 0.%d", &m, &eps);
  Debug(m, eps);
  Graphs.resize(m);
  constexpr int threshold = 2;

  double sigma = sqrt(eps * (100 - eps) / 10000.0);
  bool shouldGraph0 = eps == 0;

  // Initialize n
  if (shouldGraph0) {
    if (m <= 11) { n = 4; }
    else if (m <= 31) { n = 5; }
    else { n = 6; }
  }
  else {
    n = 100;
    Debug(6 * Sqrt2 * sigma * (m - 1));
    n = min(n, int(ceil(6 * Sqrt2 * sigma * (m - 1))));
    Debug(4 * Sqrt2 * sigma * (m - 1));
    if (n == 100) n = min(n, int(ceil(4 * Sqrt2 * sigma * (m - 1))));
    Debug(2 * Sqrt2 * sigma * (m - 1));
    if (n == 100) {
      n = 100 - (int(ceil(2 * Sqrt2 * sigma * (m - 1))) - 100);
      n = min(n, 100);
      if (n > 50) {}
      else if (m <= 11) { n = 4; }
      else if (m <= 31) { n = 5; }
      else { n = 6; }
    }
  }
  edges = n * (n - 1) / 2;

  shouldGraph0 |= n <= 6;
  // Generate Graphs
  (shouldGraph0 ? GenerateGraphs0 : GenerateGraphs)();
  // GenerateGraphs0();

  Debug(n, edges, sigma, shouldGraph0);

  // Solve
  rep(i, 100) {
    string s;
    cin >> s;
    // Debug(i, s);
    graph_t G = str2graph(s);
    (shouldGraph0 ? solve0 : solve)(G);
    // solve0(G);
  }
  return 0;
}
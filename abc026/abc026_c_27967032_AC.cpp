/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc026/submissions/27967032
 * Submitted at: 2021-12-18 18:49:55
 * Problem URL: https://atcoder.jp/contests/abc026/tasks/abc026_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int dfs(vector<vector<int>>& Graph, int v) {
  if (Graph[v].size() == 0) return 1;
  int maxim = 0, minim = 1e9;
  for (int next_v : Graph[v]) {
    int tmp = dfs(Graph, next_v);
    maxim = max(maxim, tmp);
    minim = min(minim, tmp);
  }
  return maxim + minim + 1;
}

int main() {
  int n;
  cin >> n;
  vector Graph(n, vector<int>(0));
  rep(i, n - 1) {
    int a;
    cin >> a;
    Graph[a - 1].push_back(i + 1);
  }
  cout << dfs(Graph, 0) << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc054/submissions/37447410
 * Submitted at: 2022-12-23 00:01:21
 * Problem URL: https://atcoder.jp/contests/abc054/tasks/abc054_c
 * Result: AC
 * Execution Time: 8 ms
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

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<bool>(n, false));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    Graph[a][b] = true;
    Graph[b][a] = true;
  }
  int ans = 0;
  vector<int> p(n - 1);
  iota(p.begin(), p.end(), 1);
  do {
    int visited = 1;
    int now = 0;
    for (int next_v : p) {
      if (Graph[now][next_v]) {
        visited++;
        now = next_v;
      }
    }
    if (visited == n) ans++;
  } while (next_permutation(p.begin(), p.end()));
  cout << ans << endl;
  return 0;
}
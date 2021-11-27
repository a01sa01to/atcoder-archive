/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/27542190
 * Submitted at: 2021-11-27 22:14:18
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_e
 * Result: AC
 * Execution Time: 405 ms
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
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> Graph(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].push_back(b - 1);
  }
  dsu d(n);
  vector<int> ans(n);
  int cnt = 0;
  for (int i = n; i > 0; i--) {
    ans[i - 1] = cnt;
    ++cnt;
    for (int j = 0; j < Graph[i - 1].size(); j++) {
      if (d.same(i - 1, Graph[i - 1][j])) continue;
      d.merge(i - 1, Graph[i - 1][j]);
      --cnt;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
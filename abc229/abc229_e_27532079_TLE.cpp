/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/27532079
 * Submitted at: 2021-11-27 21:32:40
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_e
 * Result: TLE
 * Execution Time: 2206 ms
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
    Graph[b - 1].push_back(a - 1);
  }
  dsu d(n);
  vector<int> ans(n);
  for (int i = n; i > 0; i--) {
    ans[i - 1] = d.groups().size() - i;
    for (int j = 0; j < Graph[i - 1].size(); j++) {
      if (Graph[i - 1][j] < i - 1) continue;
      d.merge(i - 1, Graph[i - 1][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
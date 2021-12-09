/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dwango2016-prelims/submissions/27779515
 * Submitted at: 2021-12-09 18:40:43
 * Problem URL: https://atcoder.jp/contests/dwango2016-prelims/tasks/dwango2016qual_b
 * Result: AC
 * Execution Time: 51 ms
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

int main() {
  int n;
  cin >> n;
  vector<int> k(n + 1);
  k[0] = 2e9;
  rep(i, n - 1) cin >> k[i + 1];
  k[n] = 2e9;
  vector<int> ans(n);
  rep(i, n) ans[i] = min(k[i], k[i + 1]);
  rep(i, n) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
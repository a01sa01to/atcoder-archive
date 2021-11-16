/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc125/submissions/27294398
 * Submitted at: 2021-11-17 00:01:23
 * Problem URL: https://atcoder.jp/contests/arc125/tasks/arc125_a
 * Result: WA
 * Execution Time: 56 ms
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
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  pair<int, int> idx(1e9, 1e9);
  rep(i, n) {
    if (a[i] == 0 && min(n - i, i) < idx.first) idx.first = min(n - i, i);
    if (a[i] == 1 && min(n - i, i) < idx.second) idx.second = min(n - i, i);
  }
  if (idx.first == 1e9 || idx.second == 1e9) {
    cout << -1 << endl;
    return 0;
  }
  int ans = m;
  rep(i, m) {
    if (b[i] == 0) ans += idx.first;
    else
      ans += idx.second;
  }
  cout << ans << endl;
  return 0;
}
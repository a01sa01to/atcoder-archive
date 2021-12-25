/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/28152222
 * Submitted at: 2021-12-25 23:42:41
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_d
 * Result: WA
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  multiset<ll> s;
  ll ans = 0;
  for (int i = n; i > 0; --i) {
    ans += s.count(sum[i] + k);
    if (a[i - 1] == k) ++ans;
    s.insert(sum[i]);
  }
  cout << ans << endl;
  return 0;
}
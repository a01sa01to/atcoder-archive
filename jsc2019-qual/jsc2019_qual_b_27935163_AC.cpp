/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jsc2019-qual/submissions/27935163
 * Submitted at: 2021-12-16 14:37:34
 * Problem URL: https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_b
 * Result: AC
 * Execution Time: 26 ms
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
typedef modint1000000007 mint;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int cnt1 = 0, cnt2 = 0;

  rep(i, n) rep(j, n) {
    if (a[i] > a[j]) {
      if (i < j) ++cnt1;
      else
        ++cnt2;
    }
  }

  mint ans = 0;
  ans += mint(cnt1) * mint(k);
  ans += mint(cnt1 + cnt2) * mint(k * (k - 1) / 2);
  cout << ans.val() << endl;
  return 0;
}
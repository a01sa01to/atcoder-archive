/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc068/submissions/27753176
 * Submitted at: 2021-12-07 21:21:41
 * Problem URL: https://atcoder.jp/contests/arc068/tasks/arc068_a
 * Result: AC
 * Execution Time: 5 ms
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
  ll n;
  cin >> n;
  ll cnt = (n / 11) * 2;
  n -= cnt / 2 * 11;
  if (n > 6) cnt += 2;
  else if (n > 0)
    ++cnt;
  cout << cnt << endl;
  return 0;
}
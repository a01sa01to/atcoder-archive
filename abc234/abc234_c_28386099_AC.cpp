/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/28386099
 * Submitted at: 2022-01-08 21:07:07
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll k;
  cin >> k;
  string ans = "";
  for (ll i = 0; (1LL << i) <= k; ++i) {
    if (k & (1LL << i)) ans.push_back('2');
    else
      ans.push_back('0');
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
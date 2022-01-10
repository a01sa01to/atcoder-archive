/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28456555
 * Submitted at: 2022-01-11 00:43:45
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bo
 * Result: WA
 * Execution Time: 2205 ms
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

ll b8t10(string s) {
  ll ans = 0;
  rep(i, s.size())(ans *= 8) += (s[i] - '0');
  Debug(ans);
  return ans;
}

string b10t9(ll n) {
  Debug(n);
  string ans = "";
  while (n) {
    ans += (n % 9 + '0');
    n /= 9;
  }
  reverse(ans.begin(), ans.end());
  Debug(ans);
  rep(i, ans.size()) if (ans[i] == '8') ans[i] = '5';
  Debug(ans);
  return ans;
}

int main() {
  ll n, k;
  cin >> n >> k;
  string ans = to_string(n);
  rep(_, k) ans = b10t9(b8t10(ans));
  cout << ans << endl;
  return 0;
}
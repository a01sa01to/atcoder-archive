/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28456646
 * Submitted at: 2022-01-11 00:58:00
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bo
 * Result: AC
 * Execution Time: 7 ms
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
  string ans;
  int k;
  cin >> ans >> k;
  rep(_, k) {
    ll tmp = 0;
    {
      // 10進に
      rep(i, ans.size()) {
        tmp *= 8;
        tmp += (ans[i] - '0');
      }
    }
    {
      // 9進に
      ans = "";
      if (tmp == 0) ans = "0";
      while (tmp > 0) {
        ans += (tmp % 9 + '0');
        tmp /= 9;
      }
      reverse(ans.begin(), ans.end());
    }
    {
      // 5
      rep(i, ans.size()) if (ans[i] == '8') ans[i] = '5';
    }
  }
  cout << ans << endl;
  return 0;
}
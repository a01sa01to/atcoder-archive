/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jag2017summer-day3/submissions/30152435
 * Submitted at: 2022-03-15 23:30:41
 * Problem URL: https://atcoder.jp/contests/jag2017summer-day3/tasks/jag2017summer_day3_b
 * Result: TLE
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll s, t, d;
  cin >> s >> t >> d;
  vector<ll> w(d);
  rep(i, d) cin >> w[i];
  ll ans = 0;
  ll sum = accumulate(w.begin(), w.end(), 0LL);
  while (true) {
    rep(i, d) {
      s += w[i];
      ++ans;
      if (s <= t) {
        cout << ans << endl;
        return 0;
      }
    }
    if (sum >= 0) {
      cout << -1 << endl;
      return 0;
    }
  }
  return 0;
}
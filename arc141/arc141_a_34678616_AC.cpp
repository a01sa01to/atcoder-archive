/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc141/submissions/34678616
 * Submitted at: 2022-09-08 00:25:34
 * Problem URL: https://atcoder.jp/contests/arc141/tasks/arc141_a
 * Result: AC
 * Execution Time: 57 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void solve() {
  ll x;
  cin >> x;
  if (x < 100) {
    cout << x / 11 * 11 << endl;
    return;
  }
  int k = to_string(x).size();

  ll ans = 1;
  rep(_, k - 1) ans *= 10;
  ans--;

  for (int i = 1; i < k; i++) {
    if (k % i == 0) {
      {
        string t = "";
        string tmp = to_string(x).substr(0, i);
        rep(_, k / i) t += tmp;
        if (stoll(t) <= x) {
          ans = max(ans, stoll(t));
        }
      }

      {
        string t = "";
        string tmp = to_string(stoll(to_string(x).substr(0, i)) - 1);
        rep(_, k / i) t += tmp;
        if (stoll(t) <= x) {
          ans = max(ans, stoll(t));
        }
      }
    }
  }
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
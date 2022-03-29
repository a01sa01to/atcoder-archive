/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day3/submissions/30545757
 * Submitted at: 2022-03-29 16:06:45
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day3/tasks/pakencamp_2021_day3_c
 * Result: WA
 * Execution Time: 133 ms
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
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll l, r, m;
  cin >> l >> r >> m;
  // subtask1
  if (l <= 1000000 && r <= 1000000) {
    const ll INF = 10000000000000000;
    ll chk = 1;
    for (ll _ = 1; _ < l; ++_) {
      chk *= 5;
      chk %= INF;
    }
    ll ans = 0;
    for (ll _ = l; _ <= r; ++_) {
      chk *= 5;
      chk %= INF;
      string t = to_string(chk);
      reverse(t.begin(), t.end());
      rep(i, min((ll) t.size(), m)) {
        ans += (t[i] - '0');
      }
    }
    cout << ans << endl;
    return 0;
  }
  // subtask 2
  ll ans = 0;
  ll cnt = r - l + 1;
  if (m >= 1) {
    ans += 5 * cnt;
  }
  if (m >= 2) {
    ans += 2 * cnt;
    if (l == 1) ans -= 2;
  }
  if (m >= 3) {
    ans += 7 * (cnt / 2);
    if (cnt % 2 == 1) {
      ans += (l % 2 == 0 ? 6 : 1);
    }
    if (l == 1) ans -= 7;
    if (l == 2) ans -= 6;
  }
  cout << ans << endl;
  return 0;
}
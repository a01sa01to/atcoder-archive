/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/30192200
 * Submitted at: 2022-03-18 00:55:54
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_g
 * Result: AC
 * Execution Time: 86 ms
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
  int q;
  cin >> q;
  queue<pair<char, int>> que;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      char c;
      int x;
      cin >> c >> x;
      que.push({ c, x });
    }
    else {
      int d;
      cin >> d;
      vector<ll> cnt(26, 0);
      while (d > 0 && !que.empty()) {
        auto [c, x] = que.front();
        if (x > d) {
          que.front() = { c, x - d };
          cnt[c - 'a'] += d;
          d = 0;
        }
        else {
          d -= x;
          que.pop();
          cnt[c - 'a'] += x;
        }
      }
      ll ans = 0;
      for (ll x : cnt) ans += x * x;
      cout << ans << endl;
    }
  }
  return 0;
}
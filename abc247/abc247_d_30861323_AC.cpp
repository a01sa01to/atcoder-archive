/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/30861323
 * Submitted at: 2022-04-10 21:18:15
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_d
 * Result: AC
 * Execution Time: 302 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int q;
  cin >> q;
  queue<pair<ll, ll>> que;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      ll x, c;
      cin >> x >> c;
      que.push(make_pair(x, c));
    }
    else {
      ll c;
      cin >> c;
      ll ans = 0;
      while (c) {
        auto [x, cnt] = que.front();
        if (cnt > c) {
          ans += c * x;
          que.front().second -= c;
          c = 0;
        }
        else {
          ans += cnt * x;
          c -= cnt;
          que.pop();
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}
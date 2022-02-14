/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc024/submissions/29331706
 * Submitted at: 2022-02-14 16:55:49
 * Problem URL: https://atcoder.jp/contests/abc024/tasks/abc024_c
 * Result: AC
 * Execution Time: 21 ms
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
  int n, d, k;
  cin >> n >> d >> k;
  vector<pair<int, int>> v(d);
  rep(i, d) cin >> v[i].first >> v[i].second;
  rep(_, k) {
    int s, t;
    cin >> s >> t;
    bool toback = s < t;
    rep(i, d) {
      if (toback) {
        if (v[i].first <= s) {
          s = max(s, v[i].second);
        }
        if (s >= t) {
          cout << i + 1 << endl;
          break;
        }
      }
      else {
        if (v[i].second >= s) {
          s = min(s, v[i].first);
        }
        if (s <= t) {
          cout << i + 1 << endl;
          break;
        }
      }
    }
  }
  return 0;
}
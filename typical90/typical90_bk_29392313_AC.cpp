/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29392313
 * Submitted at: 2022-02-18 00:17:11
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bk
 * Result: AC
 * Execution Time: 376 ms
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
  int h, w;
  cin >> h >> w;
  vector P(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> P[i][j];
  int ans = 0;
  rep(b, 1 << h) {
    set<int> tmp;
    map<int, int> cnt;
    rep(j, w) {
      set<int> s;
      rep(i, h) if (b & (1 << i)) s.insert(P[i][j]);
      if (s.size() == 1) {
        rep(i, h) {
          if (b & (1 << i)) {
            tmp.insert(P[i][j]);
            cnt[P[i][j]]++;
          }
        }
      }
    }
    int t = 0;
    for (auto x : tmp) t = max(t, cnt[x]);
    ans = max(ans, t);
  }
  cout << ans << endl;
  return 0;
}
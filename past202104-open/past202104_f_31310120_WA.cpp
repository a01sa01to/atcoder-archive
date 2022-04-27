/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/31310120
 * Submitted at: 2022-04-28 01:04:24
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_f
 * Result: WA
 * Execution Time: 17 ms
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
  int n, l, t, x;
  cin >> n >> l >> t >> x;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  ll ans = 0, cont = 0;
  rep(i, n) {
    if (v[i].second >= l) {
      if (v[i].first > t) {
        puts("forever");
        return 0;
      }
      if (v[i].first + cont > t) {
        ans += t - cont;
        ans += x;
        cont = v[i].first;
      }
      else if (v[i].first + cont == t) {
        ans += x;
        cont = 0;
      }
      else {
        cont += v[i].first;
      }
    }
    else
      cont = 0;
    ans += v[i].first;
    Debug(ans);
  }
  cout << ans << endl;
  return 0;
}
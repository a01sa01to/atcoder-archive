/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/31310388
 * Submitted at: 2022-04-28 01:25:01
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_f
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
  rep(i, n) if (v[i].second >= l && v[i].first > t) {
    puts("forever");
    return 0;
  }

  ll ans = 0, cont = 0;
  rep(i, n) {
    if (v[i].second >= l && v[i].first + cont >= t) {
      ans += t - cont;
      ans += x;
      if (cont + v[i].first != t) i--;
      cont = 0;
    }
    else {
      ans += v[i].first;
      if (v[i].second >= l)
        cont += v[i].first;
      else
        cont = 0;
    }
    Debug(ans);
  }
  cout << ans << endl;
  return 0;
}
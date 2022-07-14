/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc119/submissions/33220090
 * Submitted at: 2022-07-14 19:42:09
 * Problem URL: https://atcoder.jp/contests/arc119/tasks/arc119_b
 * Result: AC
 * Execution Time: 33 ms
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

int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;
  int sc = 0, tc = 0;
  rep(i, n) {
    if (s[i] == '0') sc++;
    if (t[i] == '0') tc++;
  }
  if (sc != tc) {
    cout << -1 << endl;
  }
  else {
    int ans = 0;
    vector<int> si(sc), ti(tc);
    rep(i, n) {
      if (s[i] == '0') si[--sc] = i;
      if (t[i] == '0') ti[--tc] = i;
    }
    rep(i, si.size()) {
      if (si[i] != ti[i]) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
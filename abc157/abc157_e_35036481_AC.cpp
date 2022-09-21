/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/35036481
 * Submitted at: 2022-09-22 00:55:02
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_e
 * Result: AC
 * Execution Time: 418 ms
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
  cin >> n;
  string s;
  cin >> s;
  vector<set<int>> v(26);
  rep(i, n) v[s[i] - 'a'].insert(i);
  int q;
  cin >> q;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int i;
      char c;
      cin >> i >> c;
      v[s[--i] - 'a'].erase(i);
      s[i] = c;
      v[s[i] - 'a'].insert(i);
    }
    else {
      int l, r;
      cin >> l >> r;
      --l;
      int ans = 0;
      rep(i, 26) {
        auto it = v[i].lower_bound(l);
        auto it2 = v[i].lower_bound(r);
        if (distance(it, it2)) ans++;
      }
      cout << ans << endl;
    }
  }
  return 0;
}
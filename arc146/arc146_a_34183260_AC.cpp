/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc146/submissions/34183260
 * Submitted at: 2022-08-21 01:02:11
 * Problem URL: https://atcoder.jp/contests/arc146/tasks/arc146_a
 * Result: AC
 * Execution Time: 64 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.rbegin(), a.rend());
  vector<int> p(3);
  iota(p.begin(), p.end(), 0);
  ll ans = 0;
  do {
    ll t = 0;
    string s = "";
    rep(i, 3) s += to_string(a[p[i]]);
    t = stoll(s);
    ans = max(ans, t);
  } while (next_permutation(p.begin(), p.end()));
  cout << ans << endl;
  return 0;
}
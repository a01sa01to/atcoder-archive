/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dwango2015-prelims/submissions/34695254
 * Submitted at: 2022-09-09 00:00:27
 * Problem URL: https://atcoder.jp/contests/dwango2015-prelims/tasks/dwango2015_prelims_2
 * Result: AC
 * Execution Time: 9 ms
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
  string s;
  cin >> s;
  int n = s.size();
  ll ans = 0;
  int l = 0, r = 0;
  while (r < n) {
    Debug(l, r, s.substr(l, r - l + 1));
    while (l < n && s[l] != '2') l++;
    r = l;
    Debug(l, r, s.substr(l, r - l + 1));
    char pr = '5';
    while (r < n) {
      if (s[r] == '5' && pr == '2') r++;
      else if (s[r] == '2' && pr == '5')
        r++;
      else
        break;
      pr = s[r - 1];
    }
    Debug(l, r, s.substr(l, r - l + 1));
    ll t = (r - l) / 2;
    ans += t * (t + 1) / 2;
    Debug(t);
    l = r;
  }
  cout << ans << endl;
  return 0;
}
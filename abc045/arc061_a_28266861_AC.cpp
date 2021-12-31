/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc045/submissions/28266861
 * Submitted at: 2022-01-01 00:19:20
 * Problem URL: https://atcoder.jp/contests/abc045/tasks/arc061_a
 * Result: AC
 * Execution Time: 10 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  ll ans = 0;
  rep(i, 1 << (s.size() - 1)) {
    ll tmp = 0;
    string t = "";
    rep(j, s.size()) {
      if (i & (1 << (j - 1))) {
        tmp += stoll(t);
        t = s[j];
      }
      else
        t.push_back(s[j]);
    }
    tmp += stoll(t);
    ans += tmp;
  }
  cout << ans << endl;
  return 0;
}
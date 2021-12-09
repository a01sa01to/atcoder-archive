/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc022/submissions/27779934
 * Submitted at: 2021-12-09 19:12:34
 * Problem URL: https://atcoder.jp/contests/agc022/tasks/agc022_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  vector<bool> used(26, false);
  rep(i, s.size()) used[s[i] - 'a'] = true;
  if (s.size() < 26) {
    rep(i, 26) {
      if (!used[i]) {
        cout << s << char('a' + i) << endl;
        break;
      }
    }
  }
  else {
    int _i = -1;
    for (int i = s.size() - 1; i > 1; --i)
      if (s[i - 1] < s[i]) {
        _i = i;
        break;
      }
    if (_i == -1) cout << -1 << endl;
    else {
      for (int i = 0; i < _i-1; ++i) {
        cout << s[i];
      }
      cout << ++s[_i-1] << endl;
    }
  }
  return 0;
}
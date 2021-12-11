/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc022/submissions/27780190
 * Submitted at: 2021-12-09 19:31:07
 * Problem URL: https://atcoder.jp/contests/agc022/tasks/agc022_a
 * Result: AC
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
    for (int i = s.size() - 1; i > 0; --i)
      if (s[i - 1] < s[i]) {
        _i = i;
        break;
      }
    if (_i == -1) cout << -1 << endl;
    else {
      char nextc = s[_i];
      for (int i = _i + 1; i < s.size(); ++i)
        if (s[i] > s[_i - 1]) nextc = min(nextc, s[i]);
      for (int i = 0; i < _i - 1; ++i) {
        cout << s[i];
      }
      cout << nextc << endl;
    }
  }
  return 0;
}
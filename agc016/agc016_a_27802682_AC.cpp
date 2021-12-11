/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc016/submissions/27802682
 * Submitted at: 2021-12-11 10:38:58
 * Problem URL: https://atcoder.jp/contests/agc016/tasks/agc016_a
 * Result: AC
 * Execution Time: 11 ms
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
  string _s;
  cin >> _s;
  int ans = 1e9;
  rep(x, 26) {
    char c = 'a' + x;
    int cnt = 0;
    string s = _s;
    while (true) {
      bool chk = true;
      rep(i, s.size()) if (s[i] != c) {
        chk = false;
        break;
      }
      if (chk) break;
      string t = "";
      rep(i, s.size() - 1) {
        if (s[i + 1] == c) t += s[i + 1];
        else
          t += s[i];
      }
      // cout << "[DEB] " << t << endl;
      s = t;
      ++cnt;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/28153104
 * Submitted at: 2021-12-26 00:14:56
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_e
 * Result: WA
 * Execution Time: 65 ms
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
  string ans = "";

  int kuriagari = 0;
  rep(_, 100) {
    int tmp = kuriagari;
    rep(i, s.size()) tmp += s[i] - '0';
    ans += to_string(tmp % 10);
    kuriagari = tmp / 10;
    if (s.empty()) break;
    s.pop_back();
  }
  ans += to_string(kuriagari);
  for (int i = ans.size() - 1; i >= 0; --i) {
    if (ans[i] == '0') ans.pop_back();
    else
      break;
  }
  reverse(ans.begin(), ans.end());

  cout << ans << endl;
  return 0;
}
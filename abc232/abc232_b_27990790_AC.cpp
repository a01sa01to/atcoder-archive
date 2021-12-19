/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/27990790
 * Submitted at: 2021-12-19 21:07:31
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_b
 * Result: AC
 * Execution Time: 13 ms
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
  string s, t;
  cin >> s >> t;
  rep(i, 26) {
    bool chk = true;
    rep(j, s.size()) {
      if (s[j] + i != t[j] && s[j] + i - 26 != t[j]) {
        chk = false;
        break;
      }
    }
    if (chk) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
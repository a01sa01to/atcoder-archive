/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc076/submissions/27937361
 * Submitted at: 2021-12-16 17:26:39
 * Problem URL: https://atcoder.jp/contests/abc076/tasks/abc076_c
 * Result: AC
 * Execution Time: 7 ms
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
  int n = s.size(), m = t.size();
  for (int i = n - m; i >= 0; --i) {
    bool chk = true;
    for (int j = 0; j < m; ++j) {
      if (s[i + j] != '?' && s[i + j] != t[j]) chk = false;
    }
    if (chk) {
      for (int j = 0; j < m; ++j) s[i + j] = t[j];
      rep(i, n) if (s[i] == '?') s[i] = 'a';
      cout << s << endl;
      return 0;
    }
  }
  cout << "UNRESTORABLE" << endl;
  return 0;
}
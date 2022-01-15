/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/28526725
 * Submitted at: 2022-01-15 21:01:43
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_a
 * Result: AC
 * Execution Time: 7 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int ans = 0;
  ans += stoi(s);
  s += s[0];
  ans += stoi(s.substr(1));
  s += s[1];
  ans += stoi(s.substr(2));
  cout << ans << endl;
  return 0;
}
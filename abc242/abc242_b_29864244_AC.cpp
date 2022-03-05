/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/29864244
 * Submitted at: 2022-03-05 21:02:58
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_b
 * Result: AC
 * Execution Time: 20 ms
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
  sort(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
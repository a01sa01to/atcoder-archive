/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/28717486
 * Submitted at: 2022-01-23 21:00:30
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_a
 * Result: AC
 * Execution Time: 5 ms
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
  int a, b;
  cin >> a >> b;
  --a, --b;
  swap(s[a], s[b]);
  cout << s << endl;
  return 0;
}
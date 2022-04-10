/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/30846741
 * Submitted at: 2022-04-10 21:00:52
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_a
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  string t = "0";
  rep(i, 3) t.push_back(s[i]);
  cout << t << endl;
  return 0;
}
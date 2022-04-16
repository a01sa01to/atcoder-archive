/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31002994
 * Submitted at: 2022-04-16 21:01:13
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_a
 * Result: AC
 * Execution Time: 2 ms
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
  set<int> st;
  rep(i, 10) st.insert(i);
  rep(i, 9) st.erase(s[i] - '0');
  cout << *st.begin() << endl;
  return 0;
}
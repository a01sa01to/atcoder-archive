/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc097/submissions/36387785
 * Submitted at: 2022-11-12 00:00:48
 * Problem URL: https://atcoder.jp/contests/abc097/tasks/arc097_a
 * Result: AC
 * Execution Time: 15 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int k;
  cin >> k;
  set<string> st;
  rep(i, s.size()) {
    rep(j, k + 1) {
      string t = s.substr(i, j);
      st.insert(t);
    }
  }
  st.erase("");
  Debug(st);
  rep(i, k - 1) st.erase(st.begin());
  cout << *st.begin() << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37836902
 * Submitted at: 2023-01-07 22:10:41
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_a
 * Result: AC
 * Execution Time: 8 ms
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
  int n;
  cin >> n;
  stack<string> st;
  rep(i, n) {
    string s;
    cin >> s;
    st.push(s);
  }
  rep(i, n) {
    cout << st.top() << endl;
    st.pop();
  }
  return 0;
}
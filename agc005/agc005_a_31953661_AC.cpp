/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc005/submissions/31953661
 * Submitted at: 2022-05-26 00:49:59
 * Problem URL: https://atcoder.jp/contests/agc005/tasks/agc005_a
 * Result: AC
 * Execution Time: 13 ms
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
  stack<char> st;
  rep(i, s.size()) {
    if (s[i] == 'T' && !st.empty() && st.top() == 'S') {
      st.pop();
    }
    else {
      st.push(s[i]);
    }
  }
  cout << st.size() << endl;
  return 0;
}
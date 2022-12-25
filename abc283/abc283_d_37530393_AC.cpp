/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc283/submissions/37530393
 * Submitted at: 2022-12-25 09:29:58
 * Problem URL: https://atcoder.jp/contests/abc283/tasks/abc283_d
 * Result: AC
 * Execution Time: 38 ms
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
  vector<bool> used(26, false);
  stack<vector<bool>> st;
  st.push(vector<bool>(26, false));
  rep(i, s.size()) {
    if (s[i] == '(') {
      st.push(vector<bool>(26, false));
    }
    else if (s[i] == ')') {
      auto previous = st.top();
      st.pop();
      rep(c, 26) {
        if (previous[c]) {
          used[c] = false;
          previous[c] = false;
        }
      }
    }
    else {
      int idx = s[i] - 'a';
      if (used[idx]) {
        cout << "No" << endl;
        return 0;
      }
      used[idx] = true;
      st.top()[idx] = true;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
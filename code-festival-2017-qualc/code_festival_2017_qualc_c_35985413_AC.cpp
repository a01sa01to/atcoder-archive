/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-qualc/submissions/35985413
 * Submitted at: 2022-10-27 00:41:40
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_c
 * Result: AC
 * Execution Time: 9 ms
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
  deque<char> t;
  rep(i, s.size()) t.push_back(s[i]);
  int ans = 0;
  while (!t.empty()) {
    if (t.front() == t.back()) {
      t.pop_front();
      if(!t.empty()) t.pop_back();
    }
    else if (t.front() == 'x') {
      t.pop_front();
      ans++;
    }
    else if (t.back() == 'x') {
      t.pop_back();
      ans++;
    }
    else {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}
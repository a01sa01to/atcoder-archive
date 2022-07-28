/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/wupc2019/submissions/33576378
 * Submitted at: 2022-07-29 00:00:02
 * Problem URL: https://atcoder.jp/contests/wupc2019/tasks/wupc2019_a
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
  rep(i, s.size() - 1) {
    Debug(i, s);
    if (s[i] == 'W' && s[i + 1] == 'A') {
      s[i] = 'A', s[i + 1] = 'C';
      i = max(i - 2, -1);
    }
  }
  cout << s << endl;
  return 0;
}
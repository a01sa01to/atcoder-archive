/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc018/submissions/34852461
 * Submitted at: 2022-09-14 18:13:20
 * Problem URL: https://atcoder.jp/contests/abc018/tasks/abc018_2
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
  string s;
  cin >> s;
  int n;
  cin >> n;
  rep(i, n) {
    int l, r;
    cin >> l >> r;
    l--;
    reverse(s.begin() + l, s.begin() + r);
  }
  cout << s << endl;
  return 0;
}
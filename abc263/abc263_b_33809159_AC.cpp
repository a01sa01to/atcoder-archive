/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/33809159
 * Submitted at: 2022-08-06 21:08:18
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_b
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
  vector<int> p(n, -1);
  rep(i, n - 1) cin >> p[i + 1];
  int cnt = -1;
  int now = n;
  while (now != -1) {
    now = p[now - 1];
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}
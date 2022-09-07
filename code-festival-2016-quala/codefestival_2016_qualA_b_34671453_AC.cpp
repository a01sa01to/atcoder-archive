/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-quala/submissions/34671453
 * Submitted at: 2022-09-07 18:20:14
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_b
 * Result: AC
 * Execution Time: 35 ms
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
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    --a[i];
  }
  int ans = 0;
  rep(i, n) {
    if (i == a[a[i]]) ans++;
  }
  cout << ans / 2 << endl;
  return 0;
}
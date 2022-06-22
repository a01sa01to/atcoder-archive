/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc169/submissions/32662460
 * Submitted at: 2022-06-23 00:00:18
 * Problem URL: https://atcoder.jp/contests/abc169/tasks/abc169_e
 * Result: AC
 * Execution Time: 138 ms
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
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (n & 1) {
    cout << b[n / 2] - a[n / 2] + 1 << endl;
  }
  else {
    cout << ((b[n / 2 - 1] + b[n / 2]) - (a[n / 2 - 1] + a[n / 2])) + 1<< endl;
  }
  return 0;
}
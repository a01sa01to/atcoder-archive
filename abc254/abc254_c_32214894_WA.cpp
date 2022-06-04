/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/32214894
 * Submitted at: 2022-06-04 21:15:38
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_c
 * Result: WA
 * Execution Time: 62 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(i, n - k) {
    if (a[i] > a[i + k]) swap(a[i], a[i + k]);
  }
  Debug(a);
  bool chk = true;
  rep(i, n - 1) {
    if (a[i] > a[i + 1]) chk = false;
  }
  puts(chk ? "Yes" : "No");
  return 0;
}
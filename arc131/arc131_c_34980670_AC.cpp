/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc131/submissions/34980670
 * Submitted at: 2022-09-19 00:13:30
 * Problem URL: https://atcoder.jp/contests/arc131/tasks/arc131_c
 * Result: AC
 * Execution Time: 119 ms
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
  rep(i, n) cin >> a[i];
  if (n % 2) {
    cout << "Win" << endl;
  }
  else {
    int v = 0;
    rep(i, n) v ^= a[i];
    bool chk = false;
    rep(i, n) {
      if (v == a[i]) chk = true;
    }
    cout << (chk ? "Win" : "Lose") << endl;
  }
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/33220474
 * Submitted at: 2022-07-14 20:08:16
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: AC
 * Execution Time: 41 ms
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
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  rep(i, n - 1) {
    if (h[i] < h[i + 1]) {
      h[i + 1]--;
    }
  }
  bool ans = true;
  rep(i, n - 1) {
    if (h[i] > h[i + 1]) ans = false;
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
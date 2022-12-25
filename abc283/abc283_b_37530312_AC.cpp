/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc283/submissions/37530312
 * Submitted at: 2022-12-25 09:21:40
 * Problem URL: https://atcoder.jp/contests/abc283/tasks/abc283_b
 * Result: AC
 * Execution Time: 213 ms
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
  int q;
  cin >> q;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int k, x;
      cin >> k >> x;
      a[k - 1] = x;
    }
    else {
      int k;
      cin >> k;
      cout << a[k - 1] << endl;
    }
  }
  return 0;
}
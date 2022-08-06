/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/33807092
 * Submitted at: 2022-08-06 21:06:17
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_a
 * Result: AC
 * Execution Time: 7 ms
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
  vector<int> a(5);
  rep(i, 5) cin >> a[i];
  sort(a.begin(), a.end());
  if (a[0] == a[1]) {
    if (a[1] == a[2] && a[3] == a[4]) {
      cout << "Yes" << endl;
    }
    else if (a[2] == a[3] && a[3] == a[4]) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
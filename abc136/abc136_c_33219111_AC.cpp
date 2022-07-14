/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/33219111
 * Submitted at: 2022-07-14 18:35:51
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: AC
 * Execution Time: 40 ms
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
  bool ans = true;
  for (int i = n - 2; i >= 0; i--) {
    if (h[i] == h[i + 1] + 1)
      h[i]--;
    else if (h[i] > h[i + 1])
      ans = false;
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
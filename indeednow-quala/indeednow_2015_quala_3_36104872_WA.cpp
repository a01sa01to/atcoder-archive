/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/indeednow-quala/submissions/36104872
 * Submitted at: 2022-10-31 00:48:41
 * Problem URL: https://atcoder.jp/contests/indeednow-quala/tasks/indeednow_2015_quala_3
 * Result: WA
 * Execution Time: 208 ms
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
  sort(a.rbegin(), a.rend());
  while (a.size() && a.back() == 0) a.pop_back();
  a.push_back(-1);
  int q;
  cin >> q;
  while (q--) {
    int k;
    cin >> k;
    cout << a[k] + 1 << endl;
  }
  return 0;
}
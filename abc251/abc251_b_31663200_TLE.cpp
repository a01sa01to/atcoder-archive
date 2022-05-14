/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31663200
 * Submitted at: 2022-05-14 21:09:33
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_b
 * Result: TLE
 * Execution Time: 2207 ms
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
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  set<int> s;
  rep(i, n) if (a[i] <= w) s.insert(a[i]);
  rep(i, n) rep(j, n) {
    if (i != j && a[i] + a[j] <= w) s.insert(a[i] + a[j]);
  }
  rep(i, n) rep(j, n) rep(k, n) {
    if (i != j && j != k && i != k && a[i] + a[j] + a[k] <= w) s.insert(a[i] + a[j] + a[k]);
  }
  cout << s.size() << endl;
  return 0;
}
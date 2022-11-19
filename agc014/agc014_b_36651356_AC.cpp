/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc014/submissions/36651356
 * Submitted at: 2022-11-20 01:06:20
 * Problem URL: https://atcoder.jp/contests/agc014/tasks/agc014_b
 * Result: AC
 * Execution Time: 51 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> deg(n, 0);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    deg[--a]++, deg[--b]++;
  }
  bool ok = true;
  rep(i, n) ok &= (deg[i] % 2 == 0);
  cout << (ok ? "YES" : "NO") << endl;
  return 0;
}
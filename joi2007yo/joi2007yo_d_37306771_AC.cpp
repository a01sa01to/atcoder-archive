/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2007yo/submissions/37306771
 * Submitted at: 2022-12-17 00:23:25
 * Problem URL: https://atcoder.jp/contests/joi2007yo/tasks/joi2007yo_d
 * Result: AC
 * Execution Time: 10 ms
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
  vector<int> a(2 * n);
  iota(a.begin(), a.end(), 1);
  while (m--) {
    int x;
    cin >> x;
    vector<int> newa(2 * n);
    if (x == 0) {
      rep(i, n) {
        newa[2 * i] = a[i];
        newa[2 * i + 1] = a[n + i];
      }
    }
    else {
      rep(i, 2 * n) newa[i] = a[(i + x) % (2 * n)];
    }
    swap(a, newa);
    Debug(a);
  }
  rep(i, 2 * n) cout << a[i] << endl;
  return 0;
}
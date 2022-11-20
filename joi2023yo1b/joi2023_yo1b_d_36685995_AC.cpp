/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1b/submissions/36685995
 * Submitted at: 2022-11-21 00:41:01
 * Problem URL: https://atcoder.jp/contests/joi2023yo1b/tasks/joi2023_yo1b_d
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int m;
  cin >> m;
  set<int> b;
  rep(i, m) {
    int x;
    cin >> x;
    b.insert(x);
  }
  int now = 0;
  rep(i, n) {
    now += a[i];
    if (b.count(now)) now = 0;
  }
  cout << now << endl;
  return 0;
}
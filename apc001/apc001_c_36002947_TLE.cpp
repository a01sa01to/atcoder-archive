/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/apc001/submissions/36002947
 * Submitted at: 2022-10-28 01:02:23
 * Problem URL: https://atcoder.jp/contests/apc001/tasks/apc001_c
 * Result: TLE
 * Execution Time: 2205 ms
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
  const string E = "Vacant";
  vector<string> a(n, "Unknown");
  int l = 0, r = n;
  cout << l << endl;
  cin >> a[l];
  if (a[l] == E) return 0;
  cout << r - 1 << endl;
  cin >> a[r - 1];
  if (a[r - 1] == E) return 0;
  while (r - l > 1) {
    int m = (l + r) / 2;
    cout << m << endl;
    cin >> a[m];
    if (a[m] == E) return 0;
    if (r % 2 == l % 2) {
      if (a[l] != a[m]) r = m;
    }
    else {
      if (a[r - 1] != a[m]) l = m + 1;
    }
  }
  return 0;
}
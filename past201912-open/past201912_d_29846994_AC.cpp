/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/29846994
 * Submitted at: 2022-03-05 00:14:11
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_d
 * Result: AC
 * Execution Time: 64 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  int x = 2, y = -1;
  rep(i, n - 1) {
    if (a[i + 1] - a[i] == 2) x = a[i] + 1;
    if (a[i + 1] == a[i]) y = a[i];
  }
  if (y == -1) cout << "Correct" << endl;
  else
    printf("%d %d\n", y, x);
  return 0;
}
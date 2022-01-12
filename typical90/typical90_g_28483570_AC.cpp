/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28483570
 * Submitted at: 2022-01-13 00:36:28
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_g
 * Result: AC
 * Execution Time: 669 ms
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
  int q;
  cin >> q;
  rep(i, q) {
    int b;
    cin >> b;
    int ok = 0, ng = n;
    while (ng - ok > 1) {
      int mid = (ok + ng) / 2;
      if (a[mid] <= b) ok = mid;
      else
        ng = mid;
    }
    if (ng == n) cout << abs(a[n - 1] - b) << endl;
    else
      cout << min(abs(a[ok] - b), abs(a[ng] - b)) << endl;
  }
  return 0;
}
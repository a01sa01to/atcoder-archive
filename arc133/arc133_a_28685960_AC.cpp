/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc133/submissions/28685960
 * Submitted at: 2022-01-22 21:22:03
 * Problem URL: https://atcoder.jp/contests/arc133/tasks/arc133_a
 * Result: AC
 * Execution Time: 71 ms
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
  int prev = -1;
  rep(i, n) {
    if (a[i] > prev) {
      prev = a[i];
    }
    else if (a[i] < prev)
      break;
  }
  rep(i, n) {
    if (a[i] != prev) cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
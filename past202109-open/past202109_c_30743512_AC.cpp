/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202109-open/submissions/30743512
 * Submitted at: 2022-04-06 00:07:26
 * Problem URL: https://atcoder.jp/contests/past202109-open/tasks/past202109_c
 * Result: AC
 * Execution Time: 40 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 0;
  rep(i, n) if (a[i] == x) ++ans;
  cout << ans << endl;
  return 0;
}
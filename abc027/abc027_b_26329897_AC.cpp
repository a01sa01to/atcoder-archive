/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc027/submissions/26329897
 * Submitted at: 2021-10-03 12:33:12
 * Problem URL: https://atcoder.jp/contests/abc027/tasks/abc027_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> sum(n + 1, 0);
  rep(i, n) {
    cin >> a[i];
    sum[i + 1] = sum[i] + a[i];
  }
  if (sum[n] % n) {
    cout << -1 << endl;
    return 0;
  }
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (sum[i] / i != (sum[n] - sum[i]) / (n - i)) ans++;
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc024/submissions/26329528
 * Submitted at: 2021-10-03 12:09:07
 * Problem URL: https://atcoder.jp/contests/abc024/tasks/abc024_b
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> imos(1e7, 0);
  int n,t;
  cin >> n >> t;
  rep(i, n) {
    int a;
    cin >> a;
    imos[a]++;
    imos[a + t]--;
  }
  rep(i, 1e7 - 1) imos[i + 1] += imos[i];
  int ans = 0;
  rep(i, 1e7) ans += (imos[i] > 0);
  cout << ans << endl;
}
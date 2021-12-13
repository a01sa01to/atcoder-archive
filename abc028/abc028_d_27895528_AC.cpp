/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/27895528
 * Submitted at: 2021-12-13 19:04:12
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_d
 * Result: AC
 * Execution Time: 6 ms
 */

// under under under -> x
// under under just -> x
// under under over -> x
// under just just -> o (k-1/n * 1/n * 1/n) x3
// under just over -> o (k-1/n * 1/n * n-k/n) x6
// just just just -> o (1/n * 1/n * 1/n) x1
// just just over -> o (1/n * 1/n * n-k/n) x3
// just over over -> x
// over over over -> x

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
  ll n,k;cin>>n>>k;
  ll _ans = 0;
  _ans += (k-1) * 3;
  _ans += (k-1) * (n-k) * 6;
  _ans += 1;
  _ans += (n-k) * 3;
  ld ans = ld(_ans) / ld(n*n*n);
  cout << fixed << setprecision(15) << ans << endl;
}
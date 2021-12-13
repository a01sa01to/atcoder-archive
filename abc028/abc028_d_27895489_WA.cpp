/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/27895489
 * Submitted at: 2021-12-13 19:01:13
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_d
 * Result: WA
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
typedef long double ld;
int main(){
  int n,k;cin>>n>>k;
  ld ans = 0;
  ans += (k-1) * 3;
  ans += (k-1) * (n-k) * 6;
  ans += 1;
  ans += (n-k) * 3;
  ans /= n*n*n;
  cout << fixed << setprecision(15) << ans << endl;
}
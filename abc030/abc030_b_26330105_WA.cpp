/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc030/submissions/26330105
 * Submitted at: 2021-10-03 12:50:16
 * Problem URL: https://atcoder.jp/contests/abc030/tasks/abc030_b
 * Result: WA
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  cout<<abs(60*n-11*m)%720/2.0<<endl;
}
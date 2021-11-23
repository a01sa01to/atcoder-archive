/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc165/submissions/27457528
 * Submitted at: 2021-11-23 15:34:12
 * Problem URL: https://atcoder.jp/contests/abc165/tasks/abc165_d
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,n;cin>>a>>b>>n;
  //x=b-1のときbest
  if(b-1<=n)cout<<a*(b-1)/b<<endl;
  else cout<<a*n/b<<endl;
}
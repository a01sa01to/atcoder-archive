/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc036/submissions/27205460
 * Submitted at: 2021-11-13 16:52:53
 * Problem URL: https://atcoder.jp/contests/arc036/tasks/arc036_a
 * Result: AC
 * Execution Time: 21 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,a,b,c;cin>>n>>k>>a>>b>>c;
  for(int i=3;i<=n;i++){
  	if(a+b+c<k){cout<<i<<endl;return 0;}
    a=b,b=c;cin>>c;
  }
  cout<<-1<<endl;
}
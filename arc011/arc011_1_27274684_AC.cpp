/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc011/submissions/27274684
 * Submitted at: 2021-11-15 18:57:30
 * Problem URL: https://atcoder.jp/contests/arc011/tasks/arc011_1
 * Result: AC
 * Execution Time: 15 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,n,N;cin>>m>>n>>N;
  int ans=N;
  while(N>=m){
    ans+=(N/m)*n;
    N=N%m+(N/m)*n;
  }
  cout<<ans<<endl;
}
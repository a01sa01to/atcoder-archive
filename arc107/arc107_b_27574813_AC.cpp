/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc107/submissions/27574813
 * Submitted at: 2021-11-28 22:05:53
 * Problem URL: https://atcoder.jp/contests/arc107/tasks/arc107_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long n,k;cin>>n>>k;
  long ans=0;
  for(long i=2;i<=2*n;i++){//i->i-k
    ans+=max(0L, min(i-1, 2*n+1-i))*max(0L, min(i-1-k,2*n+1-i+k));
  }
  cout<<ans<<endl;
}
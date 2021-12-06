/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc059/submissions/27741812
 * Submitted at: 2021-12-06 23:36:53
 * Problem URL: https://atcoder.jp/contests/arc059/tasks/arc059_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int sqr(int x){return x*x;}
int main(){
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;++i)cin>>v[i];
  int ans=1e9;
  for(int x=-100;x<=100;++x){
    int tmp=0;
    for(int i=0;i<n;++i)tmp+=sqr(x-v[i]);
    ans=min(ans,tmp);
  }
  cout<<ans<<endl;
}
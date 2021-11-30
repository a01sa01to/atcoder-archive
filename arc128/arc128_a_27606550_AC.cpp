/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc128/submissions/27606550
 * Submitted at: 2021-11-30 23:03:42
 * Problem URL: https://atcoder.jp/contests/arc128/tasks/arc128_a
 * Result: AC
 * Execution Time: 80 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<bool>ans(n,false);vector<int>a(n);
  for(int i=0;i<n;++i)cin>>a[i];
  for(int i=1;i<n;++i){
    if(a[i-1]>a[i]){
      ans[i-1]=!ans[i-1];
      ans[i]=true;
    }
  }
  for(int i=0;i<n;++i)cout<<ans[i]<<" ";
  cout<<endl;
}
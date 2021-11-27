/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/keyence2020/submissions/27505834
 * Submitted at: 2021-11-27 12:49:05
 * Problem URL: https://atcoder.jp/contests/keyence2020/tasks/keyence2020_c
 * Result: AC
 * Execution Time: 22 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,s;cin>>n>>k>>s;
  vector<int>ans(n,1e9);
  if(s<1e9)for(int i=0;i<k;i++)ans[i]=s;
  else for(int i=k;i<n;i++)ans[i]=1;
  for(int x:ans)cout<<x<<" ";
  cout<<endl;
}
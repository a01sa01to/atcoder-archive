/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/aising2020/submissions/27269611
 * Submitted at: 2021-11-15 12:04:38
 * Problem URL: https://atcoder.jp/contests/aising2020/tasks/aising2020_c
 * Result: AC
 * Execution Time: 33 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> ans(10*n,0);
  for(int i=1;i*i<=n;i++)for(int j=1;j*j<=n;j++)for(int k=1;k*k<=n;k++){
    ans[i*i+j*j+k*k+i*j+j*k+k*i -1]++;
  }
  for(int i=0;i<n;i++)cout<<ans[i]<<endl;
}
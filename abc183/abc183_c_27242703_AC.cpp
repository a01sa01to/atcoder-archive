/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc183/submissions/27242703
 * Submitted at: 2021-11-14 00:23:19
 * Problem URL: https://atcoder.jp/contests/abc183/tasks/abc183_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;cin>>n>>k;
  vector<vector<int>> t(n,vector<int>(n));
  for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>t[i][j];
  vector<int> a(n-1);
  for(int i=0;i<n-1;i++)a[i]=i+1;
  int ans=0;
  do{
	int ts=0;
    for(int i=0;i<n;i++){
      if(i==0)ts+=t[0][a[i]];
      else if(i==n-1)ts+=t[a[i-1]][0];
      else ts+=t[a[i-1]][a[i]];
    }
    if(ts==k)ans++;
  }while(next_permutation(a.begin(),a.end()));
  cout<<ans<<endl;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc174/submissions/27320320
 * Submitted at: 2021-11-18 23:05:29
 * Problem URL: https://atcoder.jp/contests/abc174/tasks/abc174_d
 * Result: AC
 * Execution Time: 12 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  string s;cin>>s;
  int w=0,r=0;
  // RRR..RW..WWWにする
  for(int i=0;i<n;i++)if(s[i]=='R')r++;
  int ans=max(w,r);
  for(int i=0;i<n;i++){
    // i番目まで見た
    if(s[i]=='R')r--;else w++;
    ans=min(ans,max(r,w));
  }
  cout<<ans<<endl;
}
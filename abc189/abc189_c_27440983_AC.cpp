/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/27440983
 * Submitted at: 2021-11-22 13:46:20
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_c
 * Result: AC
 * Execution Time: 56 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  int ans=0;
  for(int l=0;l<n;l++){
    int tmp=a[l];
    for(int r=l;r<n;r++){
      tmp=min(tmp,a[r]);
      ans=max(ans,tmp*(r-l+1));
    }
  }
  cout<<ans<<endl;
}
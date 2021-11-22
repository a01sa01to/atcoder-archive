/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc029/submissions/27439658
 * Submitted at: 2021-11-22 11:06:44
 * Problem URL: https://atcoder.jp/contests/arc029/tasks/arc029_1
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>t(n);
  for(int i=0;i<n;i++)cin>>t[i];
  int ans=1e9;
  for(int i=0;i<1<<n;i++){
    int a1=0,a2=0;
    for(int j=0;j<n;j++){
      if(i&1<<j)a1+=t[j];
      else a2+=t[j];
    }
    ans=min(ans, max(a1,a2));
  }
  cout<<ans<<endl;
}
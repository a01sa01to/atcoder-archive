/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc072/submissions/27618841
 * Submitted at: 2021-12-01 22:52:22
 * Problem URL: https://atcoder.jp/contests/abc072/tasks/arc082_b
 * Result: AC
 * Execution Time: 38 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;++i)cin>>a[i];
  int cnt=0;
  for(int i=1;i<=n;++i)if(a[i-1]==i)++cnt;
  for(int i=0;i<n-1;++i){
    if(a[i]+1==a[i+1] && a[i]==i+1)--cnt,++i;
  }
  cout<<cnt<<endl;
}
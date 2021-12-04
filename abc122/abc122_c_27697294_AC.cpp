/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc122/submissions/27697294
 * Submitted at: 2021-12-05 00:23:30
 * Problem URL: https://atcoder.jp/contests/abc122/tasks/abc122_c
 * Result: AC
 * Execution Time: 194 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,q;cin>>n>>q;
  string s;cin>>s;
  vector<int>sum(n+1,0);
  for(int i=0;i<n;++i)sum[i+1]=sum[i]+(s[i]=='A'&&s[i+1]=='C');
  for(int t=0;t<q;++t){
    int l,r;cin>>l>>r;
    cout<<sum[r-1]-sum[l-1]<<endl;
  }
}
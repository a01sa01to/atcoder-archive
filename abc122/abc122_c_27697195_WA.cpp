/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc122/submissions/27697195
 * Submitted at: 2021-12-05 00:18:22
 * Problem URL: https://atcoder.jp/contests/abc122/tasks/abc122_c
 * Result: WA
 * Execution Time: 202 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,q;cin>>n>>q;
  string s;cin>>s;
  vector<int>sum(n+1,0);
  for(int i=1;i<n;++i)sum[i+1]=sum[i]+(s[i-1]=='A'&&s[i]=='C');
  for(int t=0;t<q;++t){
    int l,r;cin>>l>>r;
    cout<<sum[r]-sum[l-1]-(s[l-1]=='C')<<endl;
  }
}
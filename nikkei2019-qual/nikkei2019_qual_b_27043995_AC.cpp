/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nikkei2019-qual/submissions/27043995
 * Submitted at: 2021-11-06 01:13:20
 * Problem URL: https://atcoder.jp/contests/nikkei2019-qual/tasks/nikkei2019_qual_b
 * Result: AC
 * Execution Time: 15 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;string a,b,c;cin>>n>>a>>b>>c;
  int ans=0;
  for(int i=0;i<n;i++){
    if(a[i]==b[i]&&b[i]==c[i]) continue;
    else if(a[i]==b[i]) ans++;
    else if(b[i]==c[i]) ans++;
    else if(c[i]==a[i]) ans++;
    else ans+=2;
  }
  cout<<ans<<endl;
}
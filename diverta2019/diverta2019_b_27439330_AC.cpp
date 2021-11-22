/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/diverta2019/submissions/27439330
 * Submitted at: 2021-11-22 10:26:17
 * Problem URL: https://atcoder.jp/contests/diverta2019/tasks/diverta2019_b
 * Result: AC
 * Execution Time: 17 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int r,g,b,n;cin>>r>>g>>b>>n;
  long long ans=0;
  for(int i=0;r*i<=n;i++)for(int j=0;r*i+g*j<=n;j++){
    if((n-(r*i+g*j))%b==0)ans++;
  }
  cout<<ans<<endl;
}
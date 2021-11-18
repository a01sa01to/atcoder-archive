/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc104/submissions/27320785
 * Submitted at: 2021-11-18 23:36:29
 * Problem URL: https://atcoder.jp/contests/arc104/tasks/arc104_b
 * Result: AC
 * Execution Time: 59 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;string s;cin>>s;
  int ans=0;
  for(int i=0;i<n;i++){
    int a=0,t=0,c=0,g=0;
    for(int j=i;j<n;j++){
      if(s[j]=='A')a++;
      if(s[j]=='T')t++;
      if(s[j]=='C')c++;
      if(s[j]=='G')g++;
      if(a==t&&c==g)ans++;
    }
  }
  cout<<ans<<endl;
}
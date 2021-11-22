/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc016/submissions/27439372
 * Submitted at: 2021-11-22 10:30:22
 * Problem URL: https://atcoder.jp/contests/arc016/tasks/arc016_2
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<string> s(n);
  for(int i=0;i<n;i++)cin>>s[i];
  int ans=0;
  for(int i=0;i<n;i++)for(int j=0;j<9;j++){
    if(i!=0 && s[i][j]==s[i-1][j]&&s[i][j]=='o'){"do nothing";}
    else if(s[i][j]=='o')ans++;
    if(s[i][j]=='x')ans++;
  }
  cout<<ans<<endl;
}
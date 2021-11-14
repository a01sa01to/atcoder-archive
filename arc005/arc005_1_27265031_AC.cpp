/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc005/submissions/27265031
 * Submitted at: 2021-11-14 23:57:22
 * Problem URL: https://atcoder.jp/contests/arc005/tasks/arc005_1
 * Result: AC
 * Execution Time: 4 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans=0;cin>>n;
  while(n--){
    string s;cin>>s;
    if(n==0)s.pop_back();
    if(s=="TAKAHASHIKUN")ans++;
    else if(s=="Takahashikun")ans++;
    else if(s=="takahashikun")ans++;
  }
  cout<<ans<<endl;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dwacon6th-prelims/submissions/26874990
 * Submitted at: 2021-10-29 23:46:10
 * Problem URL: https://atcoder.jp/contests/dwacon6th-prelims/tasks/dwacon6th_prelims_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<pair<string,int>> v(n);
  for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
  string s;cin>>s;
  int ans=0;
  for(int i=0;i<n;i++){if(v[i].first==s)ans++;else if(ans)ans+=v[i].second;}
  cout<<--ans<<endl;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc025/submissions/27060683
 * Submitted at: 2021-11-07 00:26:52
 * Problem URL: https://atcoder.jp/contests/arc025/tasks/arc025_1
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<vector<int>> v(2,vector<int>(7));
  for(int i=0;i<7;i++)cin>>v[0][i];
  for(int i=0;i<7;i++)cin>>v[1][i];
  int ans=0;
  for(int i=0;i<7;i++)ans+=max(v[0][i],v[1][i]);
  cout<<ans<<endl;
}
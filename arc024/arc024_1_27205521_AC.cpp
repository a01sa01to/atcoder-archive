/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc024/submissions/27205521
 * Submitted at: 2021-11-13 16:55:56
 * Problem URL: https://atcoder.jp/contests/arc024/tasks/arc024_1
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int l,r;cin>>l>>r;
  vector<pair<int,int>> cnt(41,{0,0});
  while(l--){int a;cin>>a;cnt[a].first++;}
  while(r--){int a;cin>>a;cnt[a].second++;}
  int ans=0;
  for(int i=10;i<41;i++)ans+=min(cnt[i].first, cnt[i].second);
  cout<<ans<<endl;
}
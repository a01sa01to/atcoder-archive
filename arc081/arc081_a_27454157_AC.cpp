/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc081/submissions/27454157
 * Submitted at: 2021-11-23 11:01:18
 * Problem URL: https://atcoder.jp/contests/arc081/tasks/arc081_a
 * Result: AC
 * Execution Time: 78 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>l;
  map<int,int>mp;
  for(int i=0;i<n;i++){int a;cin>>a;++mp[a];if(mp[a]>=2){l.push_back(a);mp[a]=0;}}
  sort(l.begin(),l.end(),greater<int>());
  cout<<(l.size()<2?0:(long)l[0]*(long)l[1])<<endl;
}
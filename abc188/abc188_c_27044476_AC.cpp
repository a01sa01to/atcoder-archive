/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc188/submissions/27044476
 * Submitted at: 2021-11-06 02:04:11
 * Problem URL: https://atcoder.jp/contests/abc188/tasks/abc188_c
 * Result: AC
 * Execution Time: 33 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  queue<pair<int,int>> q;
  for(int i=0;i<1<<n;i++){int r;cin>>r;q.push({i+1,r});}
  for(int _=1<<n;_>2;_/=2)for(int i=0;i<_/2;i++){
    auto s=q.front();q.pop();
    auto t=q.front();q.pop();
    if(s.second>t.second)q.push(s);
    else q.push(t);
  }
  auto s=q.front();q.pop();
  auto t=q.front();q.pop();
  if(s.second>t.second)cout<<t.first<<endl;
  else cout<<s.first<<endl;
}
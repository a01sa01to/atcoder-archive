/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc170/submissions/27143644
 * Submitted at: 2021-11-09 10:51:59
 * Problem URL: https://atcoder.jp/contests/abc170/tasks/abc170_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,n;cin>>x>>n;
  set<int> s;
  while(n--){int t;cin>>t;s.insert(t);}
  pair<int,int> pending={0,x};
  for(int i=0;i<=101;i++){
    if(!s.count(i) && pending.second>abs(x-i))pending={i,abs(x-i)};
  }
  cout<<pending.first<<endl;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc013/submissions/27477731
 * Submitted at: 2021-11-25 00:31:21
 * Problem URL: https://atcoder.jp/contests/agc013/tasks/agc013_a
 * Result: WA
 * Execution Time: 41 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  bool crescendo=false;
  int ans=1,streak=1;
  for(int i=1;i<n;i++){
    if(i==1)crescendo=v[i-1]<v[i];
    if(crescendo && v[i-1]>v[i]){crescendo=false;if(streak>1){++ans;streak=0;}}
    else if(!crescendo && v[i-1]<v[i]){crescendo=true;if(streak>1){++ans;streak=0;}}
    ++streak;
  }
  cout<<ans<<endl;
}
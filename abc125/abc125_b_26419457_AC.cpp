/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc125/submissions/26419457
 * Submitted at: 2021-10-09 00:06:59
 * Problem URL: https://atcoder.jp/contests/abc125/tasks/abc125_b
 * Result: AC
 * Execution Time: 65 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int n;cin>>n;
  vector<pair<int,int>> v(n);
  rep(i,n) cin>>v[i].first;
  rep(i,n) cin>>v[i].second;
  int maxim=0;
  rep(i,1<<n){
    int x=0,y=0;
    rep(j,n){
      if(i&1<<j)x+=v[j].first,y+=v[j].second;
    }
    maxim = max(maxim,x-y);
  }
  cout<<maxim<<endl;
}
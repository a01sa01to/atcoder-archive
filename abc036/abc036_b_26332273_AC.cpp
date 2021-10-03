/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc036/submissions/26332273
 * Submitted at: 2021-10-03 15:08:36
 * Problem URL: https://atcoder.jp/contests/abc036/tasks/abc036_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int n;cin>>n;
  vector<string> v(n);
  rep(i,n)cin>>v[i];
  rep(i,n){
    rep(j,n)cout<<v[n-j-1][i];
    cout<<endl;
  }
}
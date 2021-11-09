/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/keyence2021/submissions/27143858
 * Submitted at: 2021-11-09 11:15:09
 * Problem URL: https://atcoder.jp/contests/keyence2021/tasks/keyence2021_a
 * Result: AC
 * Execution Time: 407 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int n;cin>>n;
  vector<ll> a(n),b(n),c(n);
  rep(i,n)cin>>a[i];
  rep(i,n)cin>>b[i];
  priority_queue<ll,vector<ll>> ap,bp;
  c[0]=a[0]*b[0];
  rep(i,n){
    ap.push(a[i]);
    if(i==0)continue;
    c[i]=max(c[i-1], ap.top()*b[i]);
  }
  rep(i,n)cout<<c[i]<<endl;
}
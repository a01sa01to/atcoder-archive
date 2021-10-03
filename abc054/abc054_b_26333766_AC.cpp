/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc054/submissions/26333766
 * Submitted at: 2021-10-03 16:23:48
 * Problem URL: https://atcoder.jp/contests/abc054/tasks/abc054_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int n,m;
  cin>>n>>m;
  vector<string> a(n),b(m);
  rep(i,n)cin>>a[i];
  rep(i,m)cin>>b[i];
  rep(i,n)rep(j,n){
    if(i+m>n||j+m>n) continue;
    bool chk=true;
    rep(k,m)rep(l,m)if(a[i+k][j+l]!=b[k][l])chk=false;
    if(chk){puts("Yes");return 0;}
  }
  puts("No");
  return 0;
}
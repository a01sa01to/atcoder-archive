/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc047/submissions/26333392
 * Submitted at: 2021-10-03 16:06:00
 * Problem URL: https://atcoder.jp/contests/abc047/tasks/abc047_b
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
  int w,h,n;
  cin>>w>>h>>n;
  vector<vector<bool>> v(h,vector<bool>(w,false));
  while(n--){
    int a,b,c;cin>>a>>b>>c;
    if(c==1)rep(i,h)for(int j=0;j<a;j++)v[i][j]=true;
    if(c==2)rep(i,h)for(int j=a;j<w;j++)v[i][j]=true;
    if(c==3)rep(i,w)for(int j=0;j<b;j++)v[j][i]=true;
    if(c==4)rep(i,w)for(int j=b;j<h;j++)v[j][i]=true;
  }
  int ans=0;
  rep(i,h)rep(j,w) ans+=!v[i][j];
  cout<<ans<<endl;
}
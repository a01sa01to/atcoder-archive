/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc187/submissions/26827054
 * Submitted at: 2021-10-26 17:24:16
 * Problem URL: https://atcoder.jp/contests/abc187/tasks/abc187_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
struct P{int x,y;};
int main(){
  int n,ans=0;cin>>n;
  vector<P> v(n);
  for(int i=0;i<n;i++)cin>>v[i].x>>v[i].y;
  for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(abs(v[i].y-v[j].y)<=abs(v[i].x-v[j].x))ans++;
  cout<<ans<<endl;
}
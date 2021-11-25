/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc010/submissions/27490014
 * Submitted at: 2021-11-26 00:12:16
 * Problem URL: https://atcoder.jp/contests/abc010/tasks/abc010_3
 * Result: AC
 * Execution Time: 4 ms
 */

#include<bits/stdc++.h>
using namespace std;
struct P{int x,y;};
int sqr(int x){return x*x;}
double calcDist(P a,P b){return sqrt(double(sqr(a.x-b.x)+sqr(a.y-b.y)));}
int main(){
  P s,g;int t,v;cin>>s.x>>s.y>>g.x>>g.y>>t>>v;
  int n;cin>>n;
  vector<P>a(n);for(int i=0;i<n;i++)cin>>a[i].x>>a[i].y;
  bool chk=false;
  for(int i=0;i<n;i++)if(calcDist(s,a[i])+calcDist(g,a[i]) <= t*v)chk=true;
  puts(chk?"YES":"NO");
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc181/submissions/27201027
 * Submitted at: 2021-11-13 12:24:56
 * Problem URL: https://atcoder.jp/contests/abc181/tasks/abc181_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
struct P{int x,y;};
#define r(i,n) for(int i=0;i<n;i++)
int main(){
  int n;cin>>n;
  vector<P> v(n);
  r(i,n)cin>>v[i].x>>v[i].y;
  sort(v.begin(),v.end(),[](P&a,P&b){if(a.x==b.x)return a.y<b.y;return a.x<b.x;});
  bool chk=false;
  r(i,n)r(j,n)r(k,n){
    if(!(i<j&&j<k))continue;
    int dx1=v[j].x-v[i].x;
    int dx2=v[k].x-v[j].x;
    int dy1=v[j].y-v[i].y;
    int dy2=v[k].y-v[j].y;
    if(dy1*dx2==dy2*dx1)chk=true;
  }
  puts(chk?"Yes":"No");
}
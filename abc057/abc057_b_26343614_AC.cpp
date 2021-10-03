/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc057/submissions/26343614
 * Submitted at: 2021-10-04 00:53:28
 * Problem URL: https://atcoder.jp/contests/abc057/tasks/abc057_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define r(i,n) for(int i=0;i<n;i++)
struct Point{int x,y;};
int main(){
  int n,m;
  cin>>n>>m;
  vector<Point> v(n),w(m);
  r(i,n)cin>>v[i].x>>v[i].y;
  r(i,m)cin>>w[i].x>>w[i].y;
  r(i,n){
    Point mx;mx.x=1e9;mx.y=-1;
    r(j,m){
      int d=abs(v[i].x-w[j].x)+abs(v[i].y-w[j].y);
      if(d<mx.x){mx.x=d;mx.y=j;}
    }
    cout<<mx.y+1<<endl;
  }
}
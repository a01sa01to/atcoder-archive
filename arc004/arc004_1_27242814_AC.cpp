/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc004/submissions/27242814
 * Submitted at: 2021-11-14 00:27:54
 * Problem URL: https://atcoder.jp/contests/arc004/tasks/arc004_1
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long double L;
struct P{int x,y;};
int pow(int x){return x*x;}
int main(){
  int n;cin>>n;
  vector<P> v(n);
  for(int i=0;i<n;i++)cin>>v[i].x>>v[i].y;
  L ans=0;
  for(int i=0;i<n;i++)for(int j=0;j<n;j++){
    L tmp=sqrt(L(pow(v[i].x-v[j].x) + pow(v[i].y-v[j].y)));
    if(ans<tmp)ans=tmp;
  }
  cout<<fixed<<setprecision(15)<<ans<<endl;
}
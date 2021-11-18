/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc154/submissions/27316393
 * Submitted at: 2021-11-18 18:46:54
 * Problem URL: https://atcoder.jp/contests/abc154/tasks/abc154_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main(){
  int n,k;cin>>n>>k;
  vector<ld> v(n);
  for(int i=0;i<n;i++){
    int x;cin>>x;
    v[i]=(x+1)/2.0;
  }
  ld ans=0;
  for(int i=0;i<n-k+1;i++){
    ans=max(ans,accumulate(v.begin()+i,v.begin()+i+k,ld(0)));
  }
  cout<<fixed<<setprecision(15)<<ans<<endl;
}
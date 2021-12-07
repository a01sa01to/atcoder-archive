/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc129/submissions/27750489
 * Submitted at: 2021-12-07 18:06:32
 * Problem URL: https://atcoder.jp/contests/arc129/tasks/arc129_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,l,r;cin>>n>>l>>r;
  ll ans=0;
  for(int i=0;i<64;++i){
    if(n & 1LL<<i){
      ll minim = max(l, 1LL<<i);
      ll maxim = min(r+1, 2LL<<i);
      if(l<=maxim && minim<=r) ans += maxim-minim;
    }
  }
  cout<<ans<<endl;
}
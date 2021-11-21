/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc057/submissions/27431879
 * Submitted at: 2021-11-21 22:45:14
 * Problem URL: https://atcoder.jp/contests/arc057/tasks/arc057_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll a,k;cin>>a>>k;
  const ll goal = 2e12;
  // a_n = {(AK+1)(K+1)^n - 1} / K -> maxで41くらい
  // k=0 -> a_n = A + n
  if(k==0)cout<<goal-a<<endl;
  else{
    ll p=k+1;
    for(int i=1;i<42;i++){
      if(goal * k <= (a*k+1)*p - 1){cout<<i<<endl;break;}
      p*=k+1;
    }
  }
}
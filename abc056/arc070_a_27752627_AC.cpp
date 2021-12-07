/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc056/submissions/27752627
 * Submitted at: 2021-12-07 20:58:12
 * Problem URL: https://atcoder.jp/contests/abc056/tasks/arc070_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;cin>>n;
  for(ll i=1;i<=n;++i){
    if(i*(i+1)/2 >= n){cout<<i<<endl;break;}
  }
}
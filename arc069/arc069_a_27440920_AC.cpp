/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc069/submissions/27440920
 * Submitted at: 2021-11-22 13:38:52
 * Problem URL: https://atcoder.jp/contests/arc069/tasks/arc069_a
 * Result: AC
 * Execution Time: 13 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,m,ans;cin>>n>>m;
  ans=min(n,m/2);
  n-=ans,m-=ans*2;
  if(n==0 && m>=4){
    ans+=m/4;
  }
  cout<<ans<<endl;
}
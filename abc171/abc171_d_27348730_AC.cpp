/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/27348730
 * Submitted at: 2021-11-20 17:48:36
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_d
 * Result: AC
 * Execution Time: 219 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
  ll n;cin>>n;
  vector<ll>a(n),cnt(1e5+1,0);
  rep(i,n){cin>>a[i];++cnt[a[i]];}
  ll sum=0;
  rep(i,1e5+1)sum+=cnt[i]*i;
  ll q;cin>>q;
  while(q--){
    ll b,c;cin>>b>>c;
    sum+=cnt[b]*(c-b);
    cnt[c]+=cnt[b];cnt[b]=0;
    cout<<sum<<endl;
  }
}
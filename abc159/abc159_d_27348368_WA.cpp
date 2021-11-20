/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc159/submissions/27348368
 * Submitted at: 2021-11-20 17:28:26
 * Problem URL: https://atcoder.jp/contests/abc159/tasks/abc159_d
 * Result: WA
 * Execution Time: 420 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int n;cin>>n;
  vector<int> a(n);rep(i,n)cin>>a[i];
  vector<int> b=a;
  map<int,int> mp;
  sort(b.begin(),b.end());
  int prev=0;rep(i,n-1){if(b[i]==b[i+1])b[i]=prev;else{mp[b[i]]=prev;b[i]=prev++;}}mp[b.back()]=prev;b.back()=prev;
  rep(i,n)a[i]=mp[a[i]];
  vector<int>cnt(++prev,0);
  rep(i,n)++cnt[a[i]];
  long long sum=0;
  rep(i,prev)sum+=cnt[i]*(cnt[i]-1)/2;
  rep(i,n){
    int tmp=cnt[a[i]];
    cout<<sum-tmp*(tmp-1)/2+(tmp-1)*(tmp-2)/2<<endl;
  }
}
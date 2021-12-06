/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/27735625
 * Submitted at: 2021-12-06 17:15:13
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_c
 * Result: AC
 * Execution Time: 43 ms
 */

#include<bits/stdc++.h>
using namespace std;
vector<int>Primes;
int primeDivisorCount(int x){
  if(x==1)return 1;
  int cnt=1;
  for(int i=2;i*i<=x;++i){
    if(x%i != 0)continue;
    while(x%i==0)x/=i,++cnt;
  }
  if(x!=1)++cnt;
  return cnt;
}
int main(){
  int n;cin>>n;
  vector<int>ans(n);
  for(int i=0;i<n;++i)ans[i]=primeDivisorCount(i+1);
  for(int x:ans)cout<<x<<" ";
  cout<<endl;
}
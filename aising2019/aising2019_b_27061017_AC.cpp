/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/aising2019/submissions/27061017
 * Submitted at: 2021-11-07 00:48:45
 * Problem URL: https://atcoder.jp/contests/aising2019/tasks/aising2019_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define r(i,n) for(int i=0;i<n;i++)
int main(){
  int n,a,b;cin>>n>>a>>b;
  vector<int> p(n);
  r(i,n)cin>>p[i];
  int ans=0;
  r(i,n)r(j,n)r(k,n){
    if(i==j||j==k||k==i)continue;
    if(!p[i]||!p[j]||!p[k])continue;
    if(p[i]<=a&&a<p[j]&&p[j]<=b&&p[k]>b){
      ans++;
      p[i]=p[j]=p[k]=0;
    }
  }
  cout<<ans<<endl;
}
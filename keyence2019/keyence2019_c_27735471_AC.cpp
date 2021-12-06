/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/keyence2019/submissions/27735471
 * Submitted at: 2021-12-06 17:03:28
 * Problem URL: https://atcoder.jp/contests/keyence2019/tasks/keyence2019_c
 * Result: AC
 * Execution Time: 71 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> a(n),b(n);
  for(int i=0;i<n;++i)cin>>a[i];
  for(int i=0;i<n;++i)cin>>b[i];
  
  long asum=0,bsum=0;
  for(int i=0;i<n;++i)asum+=a[i];
  for(int i=0;i<n;++i)bsum+=b[i];
  
  if(bsum>asum)puts("-1");
  else{
    vector<int>c(n);
  	for(int i=0;i<n;++i)c[i]=a[i]-b[i];
    sort(c.begin(),c.end());
    int ans=0;long s=0;
    for(int i=0;i<n;++i){if(c[i]>=0)break;s-=c[i];++ans;}
    for(int i=n-1;i>=0;--i){if(s<=0)break;s-=c[i];++ans;}
    cout<<ans<<endl;
  }
}
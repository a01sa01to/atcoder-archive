/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc123/submissions/27265397
 * Submitted at: 2021-11-15 00:29:18
 * Problem URL: https://atcoder.jp/contests/arc123/tasks/arc123_b
 * Result: WA
 * Execution Time: 2205 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> a(n),b(n),c(n);
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n;i++)cin>>b[i];
  for(int i=0;i<n;i++)cin>>c[i];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  int i=0,j=0,k=0;
  int ans=0;
  while(i<n&&j<n&&k<n){
    if(a[i]<b[j]&&b[j]<c[k]){ans++;i++,j++,k++;}
    else if(a[i]<b[j])k++;
    else if(b[j]<c[k])j++,k++;
  }
  cout<<ans<<endl;
}
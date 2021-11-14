/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc123/submissions/27265463
 * Submitted at: 2021-11-15 00:35:54
 * Problem URL: https://atcoder.jp/contests/arc123/tasks/arc123_b
 * Result: AC
 * Execution Time: 1369 ms
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
  int ans=0;
  for(int i=0;i<n;i++){
    auto itrb=upper_bound(b.begin(),b.end(),a[0]);
    b.erase(b.begin(),itrb);
    if(b.empty())break;
    auto itrc=upper_bound(c.begin(),c.end(),b[0]);
    c.erase(c.begin(),itrc);
    if(c.empty())break;
    ans++;
    a.erase(a.begin());
    b.erase(b.begin());
    c.erase(c.begin());
  }
  cout<<ans<<endl;
}
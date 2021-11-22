/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc093/submissions/27442046
 * Submitted at: 2021-11-22 15:08:51
 * Problem URL: https://atcoder.jp/contests/arc093/tasks/arc093_a
 * Result: AC
 * Execution Time: 179 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;cin>>n;
  vector<ll>a(n+1,0);for(int i=1;i<=n;i++)cin>>a[i];
  ll sum=0;for(int i=0;i<n+1;i++)sum+=abs(a[(i+1)%(n+1)]-a[i]);
  for(int i=1;i<=n;i++){
    int x=(i+1)%(n+1), y=(i-1)%(n+1);
    if(y<0)y+=(n+1);
    cout<<sum+abs(a[x]-a[y])-(abs(a[x]-a[i])+abs(a[i]-a[y]))<<endl;
  }
}
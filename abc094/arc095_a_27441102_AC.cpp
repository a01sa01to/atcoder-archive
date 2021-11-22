/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc094/submissions/27441102
 * Submitted at: 2021-11-22 13:57:05
 * Problem URL: https://atcoder.jp/contests/abc094/tasks/arc095_a
 * Result: AC
 * Execution Time: 364 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  const vector<int> b=a;
  sort(a.begin(),a.end());
  int m1=a[n/2],m2=a[n/2-1];
  for(int i=0;i<n;i++){
    if(b[i]>=m1)cout<<m2<<endl;
    else cout<<m1<<endl;
  }
}
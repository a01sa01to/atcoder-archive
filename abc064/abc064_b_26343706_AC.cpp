/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc064/submissions/26343706
 * Submitted at: 2021-10-04 01:01:40
 * Problem URL: https://atcoder.jp/contests/abc064/tasks/abc064_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a.begin(),a.end());int b=0;
  for(int i=0;i<n-1;i++)b+=a[i+1]-a[i];
  cout<<b<<endl;
}
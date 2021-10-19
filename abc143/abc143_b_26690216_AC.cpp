/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc143/submissions/26690216
 * Submitted at: 2021-10-19 23:06:29
 * Problem URL: https://atcoder.jp/contests/abc143/tasks/abc143_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a=0;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)a+=v[i]*v[j];
  cout<<a<<endl;
}
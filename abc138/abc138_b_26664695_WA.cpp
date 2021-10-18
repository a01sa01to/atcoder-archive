/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/26664695
 * Submitted at: 2021-10-18 13:05:10
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_b
 * Result: WA
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
typedef long double ld;
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  int b=1;
  for(int i=0;i<n;i++){ cin>>a[i];b*=a[i]; }
  int c=0;
  for(int i=0;i<n;i++){ c+=b/a[i]; }
  cout<<fixed<<setprecision(15)<<ld(b)/ld(c)<<endl;
}
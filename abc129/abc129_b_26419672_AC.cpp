/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc129/submissions/26419672
 * Submitted at: 2021-10-09 00:25:02
 * Problem URL: https://atcoder.jp/contests/abc129/tasks/abc129_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> a(n),sum(n+1,0);
  for(int i=0;i<n;i++){cin>>a[i];sum[i+1]=a[i]+sum[i];}
  int minim=10000;
  for(int i=1;i<n;i++)minim=min(minim,abs(sum[n]-2*sum[i]));
  cout<<minim<<endl;
}
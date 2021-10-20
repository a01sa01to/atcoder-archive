/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc161/submissions/26707467
 * Submitted at: 2021-10-20 23:58:56
 * Problem URL: https://atcoder.jp/contests/abc161/tasks/abc161_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,sum=0,ans=0;
  cin>>n>>m;
  vector<int> a(n);
  for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
  for(int i=0;i<n;i++){if(sum/4/m<a[i])ans++;}
  puts(ans>=m?"Yes":"No");
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/m-solutions2020/submissions/27151387
 * Submitted at: 2021-11-09 21:08:12
 * Problem URL: https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_c
 * Result: AC
 * Execution Time: 75 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n-k;i++)puts(a[k+i]>a[i]?"Yes":"No");
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-qualb/submissions/27152139
 * Submitted at: 2021-11-09 21:53:06
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-qualb/tasks/code_festival_qualB_b
 * Result: AC
 * Execution Time: 35 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  int sum=0;
  for(int i=0;i<n;i++){sum+=a[i];if(sum>=k){cout<<i+1<<endl;break;}}
}
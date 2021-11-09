/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-qualb/submissions/27152111
 * Submitted at: 2021-11-09 21:51:30
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-qualb/tasks/code_festival_qualB_b
 * Result: WA
 * Execution Time: 34 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;cin>>n>>k;
  vector<int> sum(n);
  cin>>sum[0];
  for(int i=1;i<n;i++){int a;cin>>a;sum[i]=sum[i-1]+a;}
  cout<<distance(sum.begin(), upper_bound(sum.begin(),sum.end(), --k))+1<<endl;
}
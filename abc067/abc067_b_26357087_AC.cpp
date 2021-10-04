/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc067/submissions/26357087
 * Submitted at: 2021-10-04 23:08:41
 * Problem URL: https://atcoder.jp/contests/abc067/tasks/abc067_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a.begin(),a.end(),greater<int>());
  cout<<accumulate(a.begin(),a.begin()+k,0)<<endl;
}
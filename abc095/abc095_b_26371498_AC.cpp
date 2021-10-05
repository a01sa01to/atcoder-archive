/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/26371498
 * Submitted at: 2021-10-05 22:46:46
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/abc095_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;
  cin>>n>>x;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  sort(v.begin(),v.end());
  x-=accumulate(v.begin(),v.end(),0);
  cout<<n+x/v[0]<<endl;
}
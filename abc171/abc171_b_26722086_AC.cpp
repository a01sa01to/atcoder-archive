/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/26722086
 * Submitted at: 2021-10-22 00:26:14
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  while(n--) cin>>v[n];
  sort(v.begin(),v.end());
  cout<<accumulate(v.begin(),v.begin()+k,0)<<endl;
}
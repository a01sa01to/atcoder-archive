/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/32788174
 * Submitted at: 2022-06-27 09:51:52
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_b
 * Result: AC
 * Execution Time: 49 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;cin>>n>>x;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  auto itr = remove_if(a.begin(), a.end(), [&](int i){return i==x;});
  a.erase(itr,a.end());
  for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}
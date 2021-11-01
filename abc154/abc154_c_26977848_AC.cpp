/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc154/submissions/26977848
 * Submitted at: 2021-11-01 22:46:09
 * Problem URL: https://atcoder.jp/contests/abc154/tasks/abc154_c
 * Result: AC
 * Execution Time: 77 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  sort(v.begin(),v.end());
  v.erase(unique(v.begin(),v.end()),v.end());
  puts(v.size()==n?"YES":"NO");
}
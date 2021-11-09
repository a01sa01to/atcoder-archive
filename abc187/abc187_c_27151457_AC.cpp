/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc187/submissions/27151457
 * Submitted at: 2021-11-09 21:12:15
 * Problem URL: https://atcoder.jp/contests/abc187/tasks/abc187_c
 * Result: AC
 * Execution Time: 209 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<string> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  set<string>s;
  for(int i=0;i<n;i++)s.insert(v[i]);
  for(int i=0;i<n;i++)if(s.count("!"+v[i])){cout<<v[i]<<endl;return 0;}
  puts("satisfiable");
}
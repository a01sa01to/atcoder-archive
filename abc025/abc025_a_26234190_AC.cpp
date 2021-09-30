/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc025/submissions/26234190
 * Submitted at: 2021-09-30 12:11:47
 * Problem URL: https://atcoder.jp/contests/abc025/tasks/abc025_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
  string s;int x;
  cin>>s>>x;
  vector<string> v;
  rep(i,5)rep(j,5) v.push_back({s[i],s[j]});
  sort(v.begin(),v.end());
  cout<<v[--x]<<endl;
  return 0;
}
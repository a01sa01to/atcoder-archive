/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/26329933
 * Submitted at: 2021-10-03 12:36:30
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  vector<int> c(6);
  for(int i=0;i<s.size();i++)c[s[i]-'A']++;
  for(int x:c)cout<<x<<" ";cout<<endl;
}
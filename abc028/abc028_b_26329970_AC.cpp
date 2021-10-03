/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/26329970
 * Submitted at: 2021-10-03 12:39:21
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;vector<int> c(6);
  for(int i=0;i<s.size();i++)c[s[i]-'A']++;
  printf("%d %d %d %d %d %d\n",c[0],c[1],c[2],c[3],c[4],c[5]);
}
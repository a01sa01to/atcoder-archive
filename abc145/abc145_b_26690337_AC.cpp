/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/26690337
 * Submitted at: 2021-10-19 23:12:05
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;string s;
  cin>>n>>s;
  if(n&1)puts("No");
  else puts(s.substr(0,n/2)==s.substr(n/2)?"Yes":"No");
}
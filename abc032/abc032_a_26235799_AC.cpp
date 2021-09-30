/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc032/submissions/26235799
 * Submitted at: 2021-09-30 14:30:18
 * Problem URL: https://atcoder.jp/contests/abc032/tasks/abc032_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,n;
  cin>>a>>b>>n;
  int x=lcm(a,b);
  for(int i=1;i<=n;i++) if(x*i>=n){cout<<x*i<<endl; break;}
  return 0;
}
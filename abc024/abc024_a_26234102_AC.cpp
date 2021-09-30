/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc024/submissions/26234102
 * Submitted at: 2021-09-30 12:05:02
 * Problem URL: https://atcoder.jp/contests/abc024/tasks/abc024_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c,d,e,f;
  cin>>a>>b>>c>>d>>e>>f;
  cout<<a*e+b*f-(e+f>=d?(e+f)*c:0)<<endl;
  return 0;
}
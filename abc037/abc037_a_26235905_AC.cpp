/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc037/submissions/26235905
 * Submitted at: 2021-09-30 14:41:26
 * Problem URL: https://atcoder.jp/contests/abc037/tasks/abc037_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y,z;
  cin>>x>>y>>z;
  cout<<z/min(x,y)<<endl;
  return 0;
}
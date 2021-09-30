/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc035/submissions/26235847
 * Submitted at: 2021-09-30 14:35:10
 * Problem URL: https://atcoder.jp/contests/abc035/tasks/abc035_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y;
  cin>>x>>y;
  cout<<(x*9==y*16?"16:9":"4:3")<<endl;
  return 0;
}
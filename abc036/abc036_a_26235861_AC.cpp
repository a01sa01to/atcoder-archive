/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc036/submissions/26235861
 * Submitted at: 2021-09-30 14:36:54
 * Problem URL: https://atcoder.jp/contests/abc036/tasks/abc036_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y;
  cin>>x>>y;
  cout<<(y/x)+!!(y%x)<<endl;
  return 0;
}
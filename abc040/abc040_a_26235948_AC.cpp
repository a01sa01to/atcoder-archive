/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc040/submissions/26235948
 * Submitted at: 2021-09-30 14:44:22
 * Problem URL: https://atcoder.jp/contests/abc040/tasks/abc040_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y;
  cin>>x>>y;
  cout<<min(x-y,y-1)<<endl;
  return 0;
}
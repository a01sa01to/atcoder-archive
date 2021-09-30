/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc019/submissions/26233921
 * Submitted at: 2021-09-30 11:47:01
 * Problem URL: https://atcoder.jp/contests/abc019/tasks/abc019_1
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y,z;
  cin>>x>>y>>z;
  cout<<(x+y+z-max({x,y,z})-min({x,y,z}))<<endl;
  return 0;
}
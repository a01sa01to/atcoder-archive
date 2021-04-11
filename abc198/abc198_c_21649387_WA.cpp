/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/21649387
 * Submitted at: 2021-04-11 21:14:16
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_c
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define loop(n,i) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int r,x,y;
  cin >> r >> x >> y;
  cout << ceil(sqrt(x*x + y*y)/r) << endl;
  return 0;
}
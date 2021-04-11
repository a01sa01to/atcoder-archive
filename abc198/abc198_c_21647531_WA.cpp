/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/21647531
 * Submitted at: 2021-04-11 21:12:12
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_c
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define loop(n,i) for(int i=0;i<n;i++)
using namespace std;

int main(){
  double r,x,y;
  cin >> r >> x >> y;
  double dis = sqrt(x*x + y*y);
  cout << ceil(dis/r) << endl;
  return 0;
}
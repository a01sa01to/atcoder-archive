/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/21662300
 * Submitted at: 2021-04-11 21:31:37
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define loop(n,i) for(int i=0;i<n;i++)
using namespace std;

int main(){
  double r,x,y;
  cin >> r >> x >> y;
  double dis = sqrt(x*x + y*y);
  if(dis<r){ cout << 2 << endl; }
  else{ cout << ceil(dis/r) << endl; }
  return 0;
}
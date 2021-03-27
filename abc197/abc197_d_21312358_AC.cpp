/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc197/submissions/21312358
 * Submitted at: 2021-03-27 21:52:04
 * Problem URL: https://atcoder.jp/contests/abc197/tasks/abc197_d
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define loop(n,i) for(int i=0;i<n;i++)

int main(){
  static const double Pi = 3.1415926535897932384626;
  double n,x_0,y_0,x_n,y_n;
  cin >> n >> x_0 >> y_0 >> x_n >> y_n;
  double x_m = (x_0+x_n)/2;
  double y_m = (y_0+y_n)/2;
  double x_d = x_0 - x_m;
  double y_d = y_0 - y_m;
  double theta = (2/n)*Pi;
  double x_1 = x_m + (x_d*cos(theta)) - (y_d*sin(theta));
  double y_1 = y_m + (x_d*sin(theta)) + (y_d*cos(theta));
  cout << x_1 << " " << y_1 << endl;
  return 0;
}
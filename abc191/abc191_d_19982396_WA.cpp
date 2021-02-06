/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/19982396
 * Submitted at: 2021-02-06 21:48:18
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_d
 * Result: WA
 * Execution Time: 11 ms
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double x,y,r;
  cin >> x >> y >> r;
  long long count = 0;
  for(int i = ceil(x-r);i<=floor(x+r);i++){
    double x_i = i - x;
    int bottom = ceil(y - sqrt(r*r - x_i*x_i));
    int top = floor(y + sqrt(r*r - x_i*x_i));
    count += top - bottom + 1;
  }
  cout << count << endl;
  return 0;
}
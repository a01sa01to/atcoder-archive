/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/19978246
 * Submitted at: 2021-02-06 21:37:15
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double x,y,r;
  cin >> x >> y >> r;
  int count = 0;
  for(int i = ceil(x-r);i<=floor(x+r);i++){
    double x_i = x - i;
    for(int j = ceil(y - sqrt(r*r - x_i*x_i)); j<=floor(y + sqrt(r*r - x_i*x_i));j++){
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
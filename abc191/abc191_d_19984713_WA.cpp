/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/19984713
 * Submitted at: 2021-02-06 21:54:35
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_d
 * Result: WA
 * Execution Time: 16 ms
 */

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
  long double x,y,r;
  cin >> x >> y >> r;
  unsigned long long count = 0;
  for(ll i = ceil(x-r);i<=floor(x+r);i++){
    long double x_i = i - x;
    ll bottom = ceil(y - sqrt(r*r - x_i*x_i));
    ll top = floor(y + sqrt(r*r - x_i*x_i));
    count += top - bottom + 1;
  }
  cout << count << endl;
  return 0;
}
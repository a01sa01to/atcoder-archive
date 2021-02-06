/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/20005379
 * Submitted at: 2021-02-06 22:47:54
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_d
 * Result: WA
 * Execution Time: 9 ms
 */

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
 
int main(){
  double _x,_y,_r;
  cin >> _x >> _y >> _r;
  ll x = _x * 1000;
  ll y = _y * 1000;
  ll r = _r * 1000;
  unsigned long long count = 0;
  for(ll i = ceil((x-r)/1000);i<=floor((x+r)/1000);i++){
    ll x_i = i*1000 - x;
    ll bottom = ceil((y - sqrt(r*r - x_i*x_i))/1000);
    ll top = floor((y + sqrt(r*r - x_i*x_i))/1000);
    count += top - bottom + 1;
  }
  cout << count << endl;
  return 0;
}
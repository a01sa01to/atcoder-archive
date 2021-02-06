/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/20005671
 * Submitted at: 2021-02-06 22:49:58
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_d
 * Result: WA
 * Execution Time: 8 ms
 */

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
 
int main(){
  double _x,_y,_r;
  cin >> _x >> _y >> _r;
  ll x = _x * 10000;
  ll y = _y * 10000;
  ll r = _r * 10000;
  unsigned long long count = 0;
  for(ll i = ceil((x-r)/10000);i<=floor((x+r)/10000);i++){
    ll x_i = i*10000 - x;
    ll bottom = ceil((y - sqrt(r*r - x_i*x_i))/10000);
    ll top = floor((y + sqrt(r*r - x_i*x_i))/10000);
    count += top - bottom + 1;
  }
  cout << count << endl;
  return 0;
}
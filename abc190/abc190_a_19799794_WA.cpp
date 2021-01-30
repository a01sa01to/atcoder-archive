/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/19799794
 * Submitted at: 2021-01-30 21:35:23
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  string s = fabs((a-b+c)%2)?"Takahashi":"Aoki";
  cout << s;
  return 0;
}
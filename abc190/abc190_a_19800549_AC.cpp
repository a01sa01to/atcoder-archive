/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/19800549
 * Submitted at: 2021-01-30 21:37:30
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  string s = (a>b-c)?"Takahashi":"Aoki";
  cout << s;
  return 0;
}
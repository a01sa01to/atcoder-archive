/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/19846652
 * Submitted at: 2021-01-31 23:15:19
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <iostream>
using namespace std;
int main(){
  char c[4];
  cin >> c;
  if((c[0] == c[1] && c[0] == c[2]) || (c[1] == c[2] && c[1] == c[3])) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
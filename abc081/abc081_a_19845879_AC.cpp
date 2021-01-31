/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc081/submissions/19845879
 * Submitted at: 2021-01-31 22:45:06
 * Problem URL: https://atcoder.jp/contests/abc081/tasks/abc081_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <iostream>
#include <string>
using namespace std;
int main(){
  char c[3];
  int count = 0;
  cin >> c;
  for(int i=0;i<3;i++){
    count += (int)(c[i]-'0' == 1);
  }
  cout << count << endl;
  return 0;
}
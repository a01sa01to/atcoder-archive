/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc081/submissions/19845806
 * Submitted at: 2021-01-31 22:42:48
 * Problem URL: https://atcoder.jp/contests/abc081/tasks/abc081_a
 * Result: CE
 * Execution Time: None ms
 */

#include <iostream>
#include <string>
using namespace std;
int main(){
  char c[3];
  int count = 0;
  cin >> c;
  for(int i=0;i<3;i++){
    count += (int)(c[i] == (char)"1");
  }
  cout << count << endl;
  return 0;
}
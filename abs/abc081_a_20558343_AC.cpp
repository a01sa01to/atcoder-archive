/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/20558343
 * Submitted at: 2021-02-28 00:12:10
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc081_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int c = 0;
  cin >> s;
  for(int i=0;i<3;i++){
    if(s[i] == '1'){ c++; }
  }
  cout << c << endl;
  return 0;
}
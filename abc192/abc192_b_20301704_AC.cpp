/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/20301704
 * Submitted at: 2021-02-20 21:19:40
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_b
 * Result: AC
 * Execution Time: 14 ms
 */

#include <iostream>
#include <string>
using namespace std;
int main(){
  string s;
  cin >> s;
  bool isDif = true;
  for(int i=0;i<s.length();i++){
    char c = s[i];
    if(i%2 == 0 && isupper(c)) isDif = false;
    else if(i%2 == 1 && !isupper(c)) isDif = false;
  }
  cout << (isDif ? "Yes" : "No") << endl;
  return 0;
}
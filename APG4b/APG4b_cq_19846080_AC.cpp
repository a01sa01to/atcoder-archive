/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/19846080
 * Submitted at: 2021-01-31 22:52:34
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cq
 * Result: AC
 * Execution Time: 8 ms
 */

#include <iostream>
#include <string>
using namespace std;
int main(){
  int a,b;
  string op;
  cin >> a >> op >> b;
  if(op == "+") cout << a+b << endl;
  else if(op == "-") cout << a-b << endl;
  else if(op == "*") cout << a*b << endl;
  else if(op == "/" && b!=0) cout << a/b << endl;
  else cout << "error" << endl;
  return 0;
}
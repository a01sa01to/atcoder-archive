/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/11079673
 * Submitted at: 2020-03-22 18:29:01
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_a
 * Result: CE
 * Execution Time: None ms
 */

#include <iostream>
using namespace std;
 
int main(){
  string a;
  int b;
  cin >> a;
  b = (int) a;
  if((b==0 && a=="000")||!!a){
    cout << b*2;
  }
  else{
    cout << "error";
  }
  return 0;
}
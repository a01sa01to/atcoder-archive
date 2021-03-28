/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/21341129
 * Submitted at: 2021-03-28 14:57:11
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  string n;
  cin >> n;
  try{
    cout << stoi(n)*2 << endl;
  }
  catch(...){
    cout << "error" << endl;
  }
  return 0;
}
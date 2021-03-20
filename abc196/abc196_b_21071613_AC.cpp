/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc196/submissions/21071613
 * Submitted at: 2021-03-20 21:07:11
 * Problem URL: https://atcoder.jp/contests/abc196/tasks/abc196_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++){
    if(s[i] == '.'){
      break;
    }
    cout << s[i];
  }
  cout << endl;
  return 0;
}
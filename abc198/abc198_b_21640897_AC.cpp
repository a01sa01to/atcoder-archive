/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/21640897
 * Submitted at: 2021-04-11 21:05:14
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_b
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
#define loop(n,i) for(int i=0;i<n;i++)
using namespace std;

int main(){
  string s;
  cin >> s;
  s = regex_replace(s, regex("(0)+$"), "");
  bool res = true;
  loop(s.size()/2, i){
    if(s[i] != s[s.size()-i-1]){
      res = false;
    }
  }
  cout << (res?"Yes":"No") << endl;
  return 0;
}
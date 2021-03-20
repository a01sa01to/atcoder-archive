/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc196/submissions/21076393
 * Submitted at: 2021-03-20 21:13:49
 * Problem URL: https://atcoder.jp/contests/abc196/tasks/abc196_c
 * Result: AC
 * Execution Time: 199 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main(){
  ull n,c=0;
  cin >> n;
  for(ull i=1;i<1000000;i++){
    string s = to_string(i) + to_string(i);
    if(stoull(s)<=n){
      c++;
    }
    else{
      break;
    }
  }
  cout << c << endl;
  return 0;
}
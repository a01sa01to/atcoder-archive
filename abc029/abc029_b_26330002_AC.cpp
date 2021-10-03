/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc029/submissions/26330002
 * Submitted at: 2021-10-03 12:42:00
 * Problem URL: https://atcoder.jp/contests/abc029/tasks/abc029_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;
main(){
  int i=12,a=0;
  while(i--){string s;cin>>s;if(s.find('r')!=string::npos)a++;}
  cout<<a<<endl;
}
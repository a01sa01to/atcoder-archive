/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc023/submissions/26329383
 * Submitted at: 2021-10-03 12:01:16
 * Problem URL: https://atcoder.jp/contests/abc023/tasks/abc023_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
main(){
  string s,t="b";
  int n,c=0;
  cin>>n>>s;
  while(t.size()<n){
    switch(++c%3){
      case 0:t.insert(t.begin(),'b');t.push_back('b');break;
      case 1:t.insert(t.begin(),'a');t.push_back('c');break;
      case 2:t.insert(t.begin(),'c');t.push_back('a');break;
    }
  }
  cout<<(s==t?c:-1)<<endl;
}
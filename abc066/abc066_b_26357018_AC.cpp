/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc066/submissions/26357018
 * Submitted at: 2021-10-04 23:04:36
 * Problem URL: https://atcoder.jp/contests/abc066/tasks/abc066_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  s.pop_back();
  if(s.size()%2)s.pop_back();
  while(!s.empty()){
    string a=s.substr(0,s.size()/2);
    string b=s.substr(s.size()/2,s.size()/2);
    if(a==b){cout<<s.size()<<endl;return 0;}
    s.pop_back();s.pop_back();
  }
  return 0;
}
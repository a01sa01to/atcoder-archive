/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc216/submissions/27120821
 * Submitted at: 2021-11-08 00:57:30
 * Problem URL: https://atcoder.jp/contests/abc216/tasks/abc216_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x;cin>>x;
  string s="";
  while(x>1){
    if(x&1){x--;s.push_back('A');}
    x/=2;s.push_back('B');    
  }
  s.push_back('A');
  reverse(s.begin(),s.end());
  cout<<s<<endl;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc049/submissions/26252756
 * Submitted at: 2021-10-01 18:21:30
 * Problem URL: https://atcoder.jp/contests/abc049/tasks/abc049_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  char c; cin>>c;
  string s="aiueo";
  if(s.find(c)!=string::npos) cout<<"vowel"<<endl;
  else cout<<"consonant"<<endl;
}
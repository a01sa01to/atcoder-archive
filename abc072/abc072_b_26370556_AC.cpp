/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc072/submissions/26370556
 * Submitted at: 2021-10-05 22:03:16
 * Problem URL: https://atcoder.jp/contests/abc072/tasks/abc072_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<iostream>
using namespace std;
int main(){
  string s; cin>>s;
  for(int i=0;i<s.size();i++) if(~i&1) cout<<s[i];
  cout<<endl;
}
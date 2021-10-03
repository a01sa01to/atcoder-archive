/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc032/submissions/26331737
 * Submitted at: 2021-10-03 14:37:34
 * Problem URL: https://atcoder.jp/contests/abc032/tasks/abc032_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
main(){
  string s;int k;
  cin>>s>>k;
  if(s.size()<k){cout<<0<<endl;return 0;}
  set<string> t;
  for(int i=0;i<=s.size()-k;i++) t.insert(s.substr(i,k));
  cout<<t.size()<<endl;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc011/submissions/26327185
 * Submitted at: 2021-10-03 10:03:29
 * Problem URL: https://atcoder.jp/contests/abc011/tasks/abc011_2
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
  string s; cin>>s;
  transform(s.begin(),s.end(),s.begin(),[](char& c){return tolower(c);});
  s[0]=toupper(s[0]);
  cout<<s<<endl;
}
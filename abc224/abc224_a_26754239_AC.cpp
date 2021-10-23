/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc224/submissions/26754239
 * Submitted at: 2021-10-23 21:01:37
 * Problem URL: https://atcoder.jp/contests/abc224/tasks/abc224_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  reverse(s.begin(),s.end());
  if(s.substr(0,2) == "re") puts("er");
  else puts("ist");
}
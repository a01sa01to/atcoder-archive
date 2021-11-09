/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc007/submissions/27145673
 * Submitted at: 2021-11-09 14:24:00
 * Problem URL: https://atcoder.jp/contests/arc007/tasks/arc007_1
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string x;
  string s;
  cin>>x>>s;
  cout<<regex_replace(s,regex(x),"")<<endl;
}
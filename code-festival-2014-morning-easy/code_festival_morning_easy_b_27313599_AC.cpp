/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-morning-easy/submissions/27313599
 * Submitted at: 2021-11-18 14:57:26
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-morning-easy/tasks/code_festival_morning_easy_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  n%=40;
  cout<<min(n,41-n)<<endl;
}
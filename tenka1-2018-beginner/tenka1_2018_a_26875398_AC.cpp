/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2018-beginner/submissions/26875398
 * Submitted at: 2021-10-30 00:19:28
 * Problem URL: https://atcoder.jp/contests/tenka1-2018-beginner/tasks/tenka1_2018_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  if(s.size()==3)reverse(s.begin(),s.end());
  cout<<s<<endl;
}
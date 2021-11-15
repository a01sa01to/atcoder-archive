/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2012-qualA/submissions/27275042
 * Submitted at: 2021-11-15 19:24:49
 * Problem URL: https://atcoder.jp/contests/tenka1-2012-qualA/tasks/tenka1_2012_qualA_2
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  char c[20000];
  string s="";
  while(~scanf("%s",&c)){s+=c;s+=",";}
  cout<<s.substr(0,s.size()-1)<<endl;
}
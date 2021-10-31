/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/m-solutions2019/submissions/26958258
 * Submitted at: 2021-10-31 21:52:37
 * Problem URL: https://atcoder.jp/contests/m-solutions2019/tasks/m_solutions2019_b
 * Result: AC
 * Execution Time: 2 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int x=0;
  for(int i=0;i<s.size();i++){if(s[i]=='x')x++;}
  puts(x>7?"NO":"YES");
}
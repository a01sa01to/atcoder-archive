/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-qualc/submissions/26980075
 * Submitted at: 2021-11-02 00:46:37
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i=0;i<s.size()-1;i++) if(s.substr(i,2) == "AC"){puts("Yes"); return 0;}
  puts("No");
}
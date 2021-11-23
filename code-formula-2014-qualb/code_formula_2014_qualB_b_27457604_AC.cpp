/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-formula-2014-qualb/submissions/27457604
 * Submitted at: 2021-11-23 15:38:52
 * Problem URL: https://atcoder.jp/contests/code-formula-2014-qualb/tasks/code_formula_2014_qualB_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  int odd=0,even=0;
  reverse(s.begin(),s.end());
  for(int i=0;i<s.size();i++)(i%2?even:odd)+=s[i]-'0';
  printf("%d %d\n",even,odd);
}
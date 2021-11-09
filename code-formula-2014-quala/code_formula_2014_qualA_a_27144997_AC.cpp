/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-formula-2014-quala/submissions/27144997
 * Submitted at: 2021-11-09 13:14:59
 * Problem URL: https://atcoder.jp/contests/code-formula-2014-quala/tasks/code_formula_2014_qualA_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
bool isCube(int a){
  for(int i=1;i*i*i<=a;i++){
    if(i*i*i==a)return true;
  }
  return false;
}
int main(){
  int a;cin>>a;
  puts(isCube(a)?"YES":"NO");
}
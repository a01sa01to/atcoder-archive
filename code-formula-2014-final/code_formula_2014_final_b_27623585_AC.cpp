/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-formula-2014-final/submissions/27623585
 * Submitted at: 2021-12-02 11:42:14
 * Problem URL: https://atcoder.jp/contests/code-formula-2014-final/tasks/code_formula_2014_final_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long x;cin>>x;
  cout<<x/2 + 3*(x&1)<<endl;
}
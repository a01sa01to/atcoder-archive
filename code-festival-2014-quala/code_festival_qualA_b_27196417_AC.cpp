/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-quala/submissions/27196417
 * Submitted at: 2021-11-13 00:38:49
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-quala/tasks/code_festival_qualA_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string a;int b;cin>>a>>b;b--;
  cout<<a[b%a.size()]<<endl;
}
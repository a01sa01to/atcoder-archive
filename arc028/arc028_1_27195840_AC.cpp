/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc028/submissions/27195840
 * Submitted at: 2021-11-12 23:51:29
 * Problem URL: https://atcoder.jp/contests/arc028/tasks/arc028_1
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b;cin>>n>>a>>b;
  puts(n%(a+b)>a||n%(a+b)==0?"Bug":"Ant");
}
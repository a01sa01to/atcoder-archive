/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc146/submissions/26690490
 * Submitted at: 2021-10-19 23:19:09
 * Problem URL: https://atcoder.jp/contests/abc146/tasks/abc146_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;string s;cin>>n>>s;
  transform(s.begin(),s.end(),s.begin(),[n](char& c){return (c+n>'Z'?c+n-26:c+n);});
  cout<<s<<endl;
}
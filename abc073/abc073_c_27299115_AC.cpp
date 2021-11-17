/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc073/submissions/27299115
 * Submitted at: 2021-11-17 13:13:22
 * Problem URL: https://atcoder.jp/contests/abc073/tasks/abc073_c
 * Result: AC
 * Execution Time: 77 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;set<int>s;
  while(n--){int a;cin>>a;if(s.count(a))s.erase(a);else s.insert(a);}
  cout<<s.size()<<endl;
}
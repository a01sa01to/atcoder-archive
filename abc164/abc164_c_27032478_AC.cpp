/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc164/submissions/27032478
 * Submitted at: 2021-11-05 11:13:49
 * Problem URL: https://atcoder.jp/contests/abc164/tasks/abc164_c
 * Result: AC
 * Execution Time: 153 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  set<string> s;
  int n;cin>>n;
  while(n--){string t;cin>>t;s.insert(t);}
  cout<<s.size()<<endl;
}
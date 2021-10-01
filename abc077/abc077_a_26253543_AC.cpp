/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc077/submissions/26253543
 * Submitted at: 2021-10-01 19:24:51
 * Problem URL: https://atcoder.jp/contests/abc077/tasks/abc077_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t;
  cin>>s>>t;
  reverse(t.begin(),t.end());
  cout<<(s==t?"YES":"NO")<<endl;
}
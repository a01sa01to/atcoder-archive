/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc117/submissions/26387825
 * Submitted at: 2021-10-06 22:52:47
 * Problem URL: https://atcoder.jp/contests/abc117/tasks/abc117_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,s=0,m=0,t;cin>>n;
  while(n--){cin>>t;m=max(m,t);s+=t;}
  puts(m<s-m?"Yes":"No");
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc123/submissions/27605693
 * Submitted at: 2021-11-30 22:19:26
 * Problem URL: https://atcoder.jp/contests/abc123/tasks/abc123_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long n,a,b,c,d,e;cin>>n>>a>>b>>c>>d>>e;
  long f=min({a,b,c,d,e});
  cout<<(n-1)/f+5<<endl;
}
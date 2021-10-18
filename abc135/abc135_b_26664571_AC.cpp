/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc135/submissions/26664571
 * Submitted at: 2021-10-18 12:50:29
 * Problem URL: https://atcoder.jp/contests/abc135/tasks/abc135_b
 * Result: AC
 * Execution Time: 4 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,d=0,p;cin>>n;
  for(int i=0;i<n;i++){
    cin>>p;
    if(--p!=i) d++;
  }
  puts(d==0||d==2?"YES":"NO");
}
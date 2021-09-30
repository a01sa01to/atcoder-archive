/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc022/submissions/26234003
 * Submitted at: 2021-09-30 11:55:14
 * Problem URL: https://atcoder.jp/contests/abc022/tasks/abc022_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
  int w,x,y,z;cin>>x>>y>>z>>w;
  int a=(y<=w&&w<=z);
  rep(i,x){
    int d;cin>>d;
    w+=d; if(y<=w&&w<=z) a++;
  }
  cout<<a<<endl;
  return 0;
}
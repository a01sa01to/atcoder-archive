/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/26007939
 * Submitted at: 2021-09-20 15:51:39
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc085_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
int main(){
  int n,y;
  cin >> n >> y;
  rep(i,n+1)rep(j,n-i+1){
    int k=n-i-j;
    if(i*10000 + j*5000 + k*1000 == y){
      printf("%d %d %d",i,j,k);
      return 0;
    }
  }
  printf("-1 -1 -1");
  return 0;
}
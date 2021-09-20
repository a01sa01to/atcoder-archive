/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/26007734
 * Submitted at: 2021-09-20 15:41:39
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc083_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int calc(int c){
  return (c/10000) + ((c/1000)%10) + ((c/100)%10) + ((c/10)%10) + (c%10);
}
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  int ans = 0;
  rep(i,n){
    int clc = calc(i+1);
    if(a <= clc && clc <= b) ans += i+1;
  }
  cout << ans << endl;
  return 0;
}
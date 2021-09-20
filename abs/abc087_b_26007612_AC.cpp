/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/26007612
 * Submitted at: 2021-09-20 15:35:55
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc087_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int a,b,c,x;
  cin >> a >> b >> c >> x;
  int cnt = 0;
  rep(i,a+1)rep(j,b+1)rep(k,c+1){
    if(500*i + 100*j + 50*k == x) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
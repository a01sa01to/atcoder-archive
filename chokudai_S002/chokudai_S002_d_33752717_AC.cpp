/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S002/submissions/33752717
 * Submitted at: 2022-08-04 00:05:42
 * Problem URL: https://atcoder.jp/contests/chokudai_S002/tasks/chokudai_S002_d
 * Result: AC
 * Execution Time: 112 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  long ans = 0;
  while(n--){
    int a,b;cin>>a>>b;
    ans += max(a,b);
  }
  cout << ans << endl;
}
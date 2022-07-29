/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S002/submissions/33596611
 * Submitted at: 2022-07-30 00:40:36
 * Problem URL: https://atcoder.jp/contests/chokudai_S002/tasks/chokudai_S002_c
 * Result: AC
 * Execution Time: 112 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int maxim = -1;
  while(n--){
    int a,b;cin>>a>>b;
    maxim = max(maxim, a+b);
  }
  cout << maxim << endl;
  return 0;
}
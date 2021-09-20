/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/26007805
 * Submitted at: 2021-09-20 15:44:50
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc088_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int n; cin >> n;
  priority_queue<int> a;
  rep(i,n){
    int _a; cin >> _a;
    a.push(_a);
  }
  int alice=0,bob=0;
  rep(i,n){
    if(i%2==0) alice += a.top();
    else bob += a.top();
    a.pop();
  }
  cout << alice - bob << endl;
  return 0;
}
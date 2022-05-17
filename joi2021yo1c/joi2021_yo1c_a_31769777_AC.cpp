/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2021yo1c/submissions/31769777
 * Submitted at: 2022-05-18 00:22:46
 * Problem URL: https://atcoder.jp/contests/joi2021yo1c/tasks/joi2021_yo1c_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(void){
  int a,b;cin>>a>>b;
  cout << max(a+b, a-b) << endl;
  cout << min(a+b, a-b) << endl;
}
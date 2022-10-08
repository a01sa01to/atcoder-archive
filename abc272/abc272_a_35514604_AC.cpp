/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35514604
 * Submitted at: 2022-10-09 00:00:28
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;cin>>n;
  int sum = 0;
  while(n--){
    int x;cin>>x;
    sum += x;
  }
  cout << sum << endl;
  return 0;
}
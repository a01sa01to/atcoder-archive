/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc030/submissions/27439761
 * Submitted at: 2021-11-22 11:19:22
 * Problem URL: https://atcoder.jp/contests/arc030/tasks/arc030_1
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  //nを除くと1-2-...- n-1
  //偶数番目を除けばfloor(n/2)まで対応可能
  int n,k;cin>>n>>k;
  puts(k<=n/2?"YES":"NO");
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc010/submissions/26827462
 * Submitted at: 2021-10-26 17:55:59
 * Problem URL: https://atcoder.jp/contests/agc010/tasks/agc010_a
 * Result: AC
 * Execution Time: 43 ms
 */

#include <iostream>
using namespace std;
int main(){
  long n,a,s=0;
  cin>>n;
  while(n--){cin>>a;s+=a;}
  puts(s%2?"NO":"YES");
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/26784982
 * Submitted at: 2021-10-24 00:00:45
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,s=0,a,b;cin>>n;
  while(n--){cin>>a>>b;if(a==b)s++;else s=0;if(s>2){puts("Yes");return 0;}}
  puts("No");
}
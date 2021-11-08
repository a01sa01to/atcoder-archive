/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc108/submissions/27139163
 * Submitted at: 2021-11-09 00:36:41
 * Problem URL: https://atcoder.jp/contests/arc108/tasks/arc108_a
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include<bits/stdc++.h>
int main(){
  long long s,p;
  std::cin>>s>>p;
  for(int i=1;i*i<=p;i++)if(i*(s-i)==p){puts("Yes");return 0;}
  puts("No");
}
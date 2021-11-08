/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc108/submissions/27139180
 * Submitted at: 2021-11-09 00:37:38
 * Problem URL: https://atcoder.jp/contests/arc108/tasks/arc108_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
int main(){
  long long s,p;
  std::cin>>s>>p;
  for(long long i=1;i*i<=p;i++)if(i*(s-i)==p){puts("Yes");return 0;}
  puts("No");
}
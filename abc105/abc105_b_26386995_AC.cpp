/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc105/submissions/26386995
 * Submitted at: 2021-10-06 22:12:28
 * Problem URL: https://atcoder.jp/contests/abc105/tasks/abc105_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
main(){
  int n;std::cin>>n;
  for(int i=0;i<26;i++) for(int j=0;j<15;j++){
    if(i*4 + j*7 == n){puts("Yes");return 0;}
  }
  puts("No");
}
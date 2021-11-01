/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc002/submissions/26974597
 * Submitted at: 2021-11-01 20:12:57
 * Problem URL: https://atcoder.jp/contests/arc002/tasks/arc002_1
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
main(){
  int x;
  std::cin>>x;
  bool a=false;
  if(x%4 == 0) a=true;
  if(x%100 == 0) a=false;
  if(x%400 == 0) a=true;
  puts(a?"YES":"NO");
}
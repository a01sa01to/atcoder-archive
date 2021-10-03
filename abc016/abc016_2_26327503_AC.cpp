/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc016/submissions/26327503
 * Submitted at: 2021-10-03 10:25:01
 * Problem URL: https://atcoder.jp/contests/abc016/tasks/abc016_2
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
main(){
  int a,b,c;std::cin>>a>>b>>c;
  if(a+b==a-b&&a+b==c)puts("?");
  else if(a+b==c)puts("+");
  else if(a-b==c)puts("-");
  else puts("!");
}
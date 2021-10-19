/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc144/submissions/26690254
 * Submitted at: 2021-10-19 23:08:24
 * Problem URL: https://atcoder.jp/contests/abc144/tasks/abc144_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
main(){
  int x;std::cin>>x;bool c=false;
  for(int i=1;i<10;i++)for(int j=1;j<10;j++)c|=i*j==x;
  puts(c?"Yes":"No");
}
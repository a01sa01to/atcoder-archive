/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc165/submissions/26707783
 * Submitted at: 2021-10-21 00:19:45
 * Problem URL: https://atcoder.jp/contests/abc165/tasks/abc165_b
 * Result: WA
 * Execution Time: 8 ms
 */

#include<iostream>
main(){
  long x,a=0,b=100;std::cin>>x;
  for(;b<x;b*=1.01,a++);std::cout<<a<<"\n";
}
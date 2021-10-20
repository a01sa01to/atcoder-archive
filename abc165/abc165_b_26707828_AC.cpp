/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc165/submissions/26707828
 * Submitted at: 2021-10-21 00:23:13
 * Problem URL: https://atcoder.jp/contests/abc165/tasks/abc165_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
main(){long x,a=0,b=100;std::cin>>x;for(;b<x;b+=b/100,a++);printf("%d\n",a);}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc162/submissions/26707587
 * Submitted at: 2021-10-21 00:05:46
 * Problem URL: https://atcoder.jp/contests/abc162/tasks/abc162_b
 * Result: WA
 * Execution Time: 10 ms
 */

#include<iostream>
main(){long x,s=0;std::cin>>x;while(x--){if(x%3&&x%5)s+=x;}std::cout<<s<<"\n";}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc155/submissions/26698382
 * Submitted at: 2021-10-20 15:13:55
 * Problem URL: https://atcoder.jp/contests/abc155/tasks/abc155_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
main(){int n,a,b=1;std::cin>>n;while(n--){std::cin>>a;if(~a%2&&a%3&&a%5)b=0;}puts(b?"APPROVED":"DENIED");}
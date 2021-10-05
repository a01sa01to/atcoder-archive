/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc099/submissions/26371851
 * Submitted at: 2021-10-05 23:03:32
 * Problem URL: https://atcoder.jp/contests/abc099/tasks/abc099_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
main(){int a,b,c,d;std::cin>>a>>b;for(c=b-a;c;--c)d+=c;std::cout<<d-b<<"\n";}
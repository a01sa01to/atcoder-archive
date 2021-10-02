/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc187/submissions/26265875
 * Submitted at: 2021-10-02 15:44:30
 * Problem URL: https://atcoder.jp/contests/abc187/tasks/abc187_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include<iostream>
main(){int a,b;std::cin>>a>>b;std::cout<<std::max(a/100+a/10%10+a%10,b/100+b/10%10+b%10);}
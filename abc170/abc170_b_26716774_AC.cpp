/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc170/submissions/26716774
 * Submitted at: 2021-10-21 19:02:20
 * Problem URL: https://atcoder.jp/contests/abc170/tasks/abc170_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
main(){int a,b;std::cin>>a>>b;puts(2*a<=b&&b<=4*a&&~b&1?"Yes":"No");}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc048/submissions/26333501
 * Submitted at: 2021-10-03 16:11:19
 * Problem URL: https://atcoder.jp/contests/abc048/tasks/abc048_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <iostream>
main(){long long a,b,c;std::cin>>a>>b>>c;std::cout<<b/c-a/c+!(a%c)<<"\n";}
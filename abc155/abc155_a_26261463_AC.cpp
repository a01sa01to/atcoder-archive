/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc155/submissions/26261463
 * Submitted at: 2021-10-02 09:37:23
 * Problem URL: https://atcoder.jp/contests/abc155/tasks/abc155_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
main(){int a,b,c;std::cin>>a>>b>>c;puts((a==b&&b!=c)||(b==c&&c!=a)||(c==a&&a!=b)?"Yes":"No");}
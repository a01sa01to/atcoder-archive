/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc153/submissions/26698229
 * Submitted at: 2021-10-20 15:02:50
 * Problem URL: https://atcoder.jp/contests/abc153/tasks/abc153_b
 * Result: AC
 * Execution Time: 37 ms
 */

#include<iostream>
main(){int h,n,a,c=0;std::cin>>h>>n;while(n--){std::cin>>a;c+=a;}puts(h>c?"No":"Yes");}
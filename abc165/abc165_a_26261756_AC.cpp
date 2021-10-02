/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc165/submissions/26261756
 * Submitted at: 2021-10-02 10:09:14
 * Problem URL: https://atcoder.jp/contests/abc165/tasks/abc165_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
main(){int a,b,c;std::cin>>a>>b>>c;for(int i=b;i<=c;i++){if(!(i%a)){puts("OK");return 0;}}puts("NG");}
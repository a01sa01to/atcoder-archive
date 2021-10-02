/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc168/submissions/26261889
 * Submitted at: 2021-10-02 10:22:05
 * Problem URL: https://atcoder.jp/contests/abc168/tasks/abc168_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
main(int a){std::cin>>a;switch(a%10){case 3:puts("bon");break;case 0:case 1:case 6:case 8:puts("pon");break;default:puts("hon");}}
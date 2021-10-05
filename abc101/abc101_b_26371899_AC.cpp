/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc101/submissions/26371899
 * Submitted at: 2021-10-05 23:06:40
 * Problem URL: https://atcoder.jp/contests/abc101/tasks/abc101_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
int f(int x){int a=0;while(x){a+=x%10;x/=10;}return a;}
main(){int n;std::cin>>n;puts(n%f(n)?"No":"Yes");}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc080/submissions/26371172
 * Submitted at: 2021-10-05 22:33:20
 * Problem URL: https://atcoder.jp/contests/abc080/tasks/abc080_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
int f(int x){int t=0;while(x){t+=x%10;x/=10;}return t;}
int main(){int n;std::cin>>n;puts(n%f(n)?"No":"Yes");}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc060/submissions/26343673
 * Submitted at: 2021-10-04 00:58:46
 * Problem URL: https://atcoder.jp/contests/abc060/tasks/abc060_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
main(){
int a,b,c;std::cin>>a>>b>>c;
for(int i=1;i<=b;i++)if(a*i%b==c){puts("YES");return 0;}
puts("NO");}
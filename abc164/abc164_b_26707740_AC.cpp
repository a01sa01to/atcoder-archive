/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc164/submissions/26707740
 * Submitted at: 2021-10-21 00:16:10
 * Problem URL: https://atcoder.jp/contests/abc164/tasks/abc164_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
main(){
int a,b,c,d;std::cin>>a>>b>>c>>d;
while(a>0&&c>0){a-=d;c-=b;}puts(c>0?"No":"Yes");
}
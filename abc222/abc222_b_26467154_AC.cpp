/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc222/submissions/26467154
 * Submitted at: 2021-10-09 22:49:41
 * Problem URL: https://atcoder.jp/contests/abc222/tasks/abc222_b
 * Result: AC
 * Execution Time: 26 ms
 */

#include<iostream>
main(){
  int a,b,c,d=0;std::cin>>a>>b;while(a--){std::cin>>c;if(c<b)d++;}
  std::cout<<d<<std::endl;
}
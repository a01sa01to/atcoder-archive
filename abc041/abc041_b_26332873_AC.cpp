/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc041/submissions/26332873
 * Submitted at: 2021-10-03 15:40:32
 * Problem URL: https://atcoder.jp/contests/abc041/tasks/abc041_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<iostream>
#include<atcoder/all>
main(){int a,b,c;std::cin>>a>>b>>c;atcoder::modint1000000007 d=a;d*=b,d*=c;std::cout<<d.val()<<"\n";}
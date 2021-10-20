/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc162/submissions/26707617
 * Submitted at: 2021-10-21 00:07:47
 * Problem URL: https://atcoder.jp/contests/abc162/tasks/abc162_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
main(){long long x,s=0,i=1;std::cin>>x;for(;i<=x;i++){if(i%3&&i%5)s+=i;}std::cout<<s<<"\n";}
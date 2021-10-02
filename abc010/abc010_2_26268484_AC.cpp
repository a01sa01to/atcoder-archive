/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc010/submissions/26268484
 * Submitted at: 2021-10-02 18:09:26
 * Problem URL: https://atcoder.jp/contests/abc010/tasks/abc010_2
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
main(){int n,a=0,t,i;std::cin>>n;for(i=0;i<n;i++){std::cin>>t;if(~t&1){t--;a++;}if(t%3==2)a+=2;}std::cout<<a;}
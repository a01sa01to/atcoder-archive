/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/26690172
 * Submitted at: 2021-10-19 23:04:27
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_b
 * Result: AC
 * Execution Time: 27 ms
 */

#include<iostream>
using namespace std;
main(){int n,k,a=0,c;cin>>n>>k;while(n--){cin>>c;c<k||a++;}cout<<a;}
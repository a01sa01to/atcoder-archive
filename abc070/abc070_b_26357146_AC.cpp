/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc070/submissions/26357146
 * Submitted at: 2021-10-04 23:11:56
 * Problem URL: https://atcoder.jp/contests/abc070/tasks/abc070_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
using namespace std;
main(){int a,b,c,d;cin>>a>>b>>c>>d;cout<<max(0,min(b,d)-max(a,c))<<endl;}
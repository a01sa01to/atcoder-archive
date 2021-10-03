/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc013/submissions/26327313
 * Submitted at: 2021-10-03 10:13:20
 * Problem URL: https://atcoder.jp/contests/abc013/tasks/abc013_2
 * Result: AC
 * Execution Time: 11 ms
 */

#include<iostream>
using namespace std;main(){int a,b;cin>>a>>b;cout<<min((10+a-b)%10,(10+b-a)%10)<<endl;}
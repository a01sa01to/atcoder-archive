/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc056/submissions/26333878
 * Submitted at: 2021-10-03 16:28:12
 * Problem URL: https://atcoder.jp/contests/abc056/tasks/abc056_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
main(){int w,a,b;cin>>w>>a>>b;if(a>b)swap(a,b);cout<<max(0,b-a-w)<<endl;}
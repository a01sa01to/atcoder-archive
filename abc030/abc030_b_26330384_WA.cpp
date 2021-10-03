/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc030/submissions/26330384
 * Submitted at: 2021-10-03 13:07:44
 * Problem URL: https://atcoder.jp/contests/abc030/tasks/abc030_b
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;main(){int n,m;cin>>n>>m;int a=abs(n%12*60-11*m)%360;cout<<(a?a/2.0:60*n-11*m?180:0)<<endl;}
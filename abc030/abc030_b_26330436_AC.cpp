/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc030/submissions/26330436
 * Submitted at: 2021-10-03 13:11:46
 * Problem URL: https://atcoder.jp/contests/abc030/tasks/abc030_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;main(){int n,m;cin>>n>>m;int a=abs(n%12*60-11*m)%720;cout<<min(a,720-a)/2.0<<endl;}
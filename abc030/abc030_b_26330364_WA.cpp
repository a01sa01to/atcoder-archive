/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc030/submissions/26330364
 * Submitted at: 2021-10-03 13:06:38
 * Problem URL: https://atcoder.jp/contests/abc030/tasks/abc030_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;main(){int n,m;cin>>n>>m;cout<<(abs(n%12*60-11*m)%720)/2.0<<endl;}
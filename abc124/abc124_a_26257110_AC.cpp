/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc124/submissions/26257110
 * Submitted at: 2021-10-01 23:02:36
 * Problem URL: https://atcoder.jp/contests/abc124/tasks/abc124_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;main(){int a,b;cin>>a>>b;cout<<max({a+a-1,a+b,b+b-1});}
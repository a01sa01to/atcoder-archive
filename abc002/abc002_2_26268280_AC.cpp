/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc002/submissions/26268280
 * Submitted at: 2021-10-02 17:57:45
 * Problem URL: https://atcoder.jp/contests/abc002/tasks/abc002_2
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;main(){string s;cin>>s;cout<<regex_replace(s,regex("[aiueo]"),"")<<endl;}
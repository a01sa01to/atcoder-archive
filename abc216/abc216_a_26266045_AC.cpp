/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc216/submissions/26266045
 * Submitted at: 2021-10-02 15:54:49
 * Problem URL: https://atcoder.jp/contests/abc216/tasks/abc216_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
using namespace std;main(){string s;cin>>s;cout<<stoi(s)<<(s.back()<'3'?"-":s.back()>'6'?"+":"");}
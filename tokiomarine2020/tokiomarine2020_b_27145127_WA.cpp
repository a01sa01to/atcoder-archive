/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tokiomarine2020/submissions/27145127
 * Submitted at: 2021-11-09 13:28:24
 * Problem URL: https://atcoder.jp/contests/tokiomarine2020/tasks/tokiomarine2020_b
 * Result: WA
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,v,b,w,t;cin>>a>>v>>b>>w>>t;
  puts(abs(a-b)<=t*(v-w)?"YES":"NO");
}
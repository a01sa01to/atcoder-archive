/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc018/submissions/26327911
 * Submitted at: 2021-10-03 10:51:13
 * Problem URL: https://atcoder.jp/contests/abc018/tasks/abc018_2
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;
main(){
  string s;int n;cin>>s>>n;
  while(n--){int l,r;cin>>l>>r;l--;reverse(s.begin()+l,s.begin()+r);}
  cout<<s<<endl;
}
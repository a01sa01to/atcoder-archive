/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/judge-update-202004/submissions/31608741
 * Submitted at: 2022-05-12 00:19:48
 * Problem URL: https://atcoder.jp/contests/judge-update-202004/tasks/judge_update_202004_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int s,l,r;cin>>s>>l>>r;
  if(l<=s&&s<=r)cout<<s<<endl;
  else if(s<l)cout<<l<<endl;
  else cout<<r<<endl;
}
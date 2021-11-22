/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-qualb/submissions/27441197
 * Submitted at: 2021-11-22 14:03:23
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-qualb/tasks/code_festival_2017_qualb_b
 * Result: AC
 * Execution Time: 297 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<int,int>cnt;
  for(int i=0;i<n;i++){int a;cin>>a;++cnt[a];}
  int m;cin>>m;
  bool chk=true;
  for(int i=0;i<m;i++){int a;cin>>a;if(cnt[a])--cnt[a];else chk=false;}
  puts(chk?"YES":"NO");
}
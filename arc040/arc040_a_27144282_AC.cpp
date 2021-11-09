/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc040/submissions/27144282
 * Submitted at: 2021-11-09 11:55:42
 * Problem URL: https://atcoder.jp/contests/arc040/tasks/arc040_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int ao=0,ta=0;
  for(int _=0;_<n;_++){
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i]=='B')ao++;
      if(s[i]=='R')ta++;
    }
  }
  if(ao==ta)puts("DRAW");
  else if(ao>ta)puts("AOKI");
  else puts("TAKAHASHI");
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc143/submissions/26978031
 * Submitted at: 2021-11-01 22:54:12
 * Problem URL: https://atcoder.jp/contests/abc143/tasks/abc143_c
 * Result: AC
 * Execution Time: 12 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  char prev;cin>>prev;
  int ans=1;
  for(int i=1;i<n;i++){char c;cin>>c;if(prev!=c)ans++;prev=c;}
  cout<<ans<<endl;
}
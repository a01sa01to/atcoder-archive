/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc089/submissions/27605591
 * Submitted at: 2021-11-30 22:13:48
 * Problem URL: https://atcoder.jp/contests/abc089/tasks/abc089_c
 * Result: AC
 * Execution Time: 35 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<char,long>cnt;
  for(int i=0;i<n;++i){string s;cin>>s;++cnt[s.front()];}
  long ans=0;
  ans+=cnt['M']*cnt['A']*cnt['R'];
  ans+=cnt['M']*cnt['A']*cnt['C'];
  ans+=cnt['M']*cnt['A']*cnt['H'];
  ans+=cnt['M']*cnt['R']*cnt['C'];
  ans+=cnt['M']*cnt['R']*cnt['H'];
  ans+=cnt['M']*cnt['C']*cnt['H'];
  ans+=cnt['A']*cnt['R']*cnt['C'];
  ans+=cnt['A']*cnt['R']*cnt['H'];
  ans+=cnt['A']*cnt['C']*cnt['H'];
  ans+=cnt['R']*cnt['C']*cnt['H'];
  cout<<ans<<endl;
}
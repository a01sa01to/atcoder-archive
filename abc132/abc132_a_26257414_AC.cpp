/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc132/submissions/26257414
 * Submitted at: 2021-10-01 23:24:25
 * Problem URL: https://atcoder.jp/contests/abc132/tasks/abc132_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  map<char,int> mp;
  string s;cin>>s;
  for(int i=0;i<4;i++) mp[s[i]]++;
  for(int i=0;i<4;i++) if(mp[s[i]]!=2){cout<<"No"<<endl;return 0;}
  cout<<"Yes"<<endl;
}
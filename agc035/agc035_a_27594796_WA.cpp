/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc035/submissions/27594796
 * Submitted at: 2021-11-30 00:47:43
 * Problem URL: https://atcoder.jp/contests/agc035/tasks/agc035_a
 * Result: WA
 * Execution Time: 67 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n;cin>>n;
  map<ll,ll>mp;
  for(ll i=0;i<n;++i){ll a;cin>>a;++mp[a];}
  bool chk=false;
  vector<pair<ll,ll>> tmp;
  for(auto x:mp)tmp.push_back(x);
  if(tmp.size()==1 && tmp[0].second==n)chk=true;
  else if(tmp.size()==2 && tmp[0].second*2==tmp[1].second)chk=true;
  else if(tmp.size()==3 && tmp[0].second == tmp[1].second && tmp[1].second == tmp[2].second && (tmp[0].first^tmp[1].first==tmp[2].first || tmp[1].first^tmp[2].first==tmp[0].first || tmp[2].first^tmp[0].first==tmp[1].first))chk=true;
  puts(chk?"Yes":"No");
}
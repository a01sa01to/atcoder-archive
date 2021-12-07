/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/27746997
 * Submitted at: 2021-12-07 13:27:44
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_d
 * Result: AC
 * Execution Time: 81 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
int main(){
  int n;cin>>n;
  vector<P>v(n);
  set<P>st;
  for(int i=0;i<n;++i){cin>>v[i].first>>v[i].second;st.insert(v[i]);}
  sort(v.begin(),v.end());
  int ans=0;
  for(int i=0;i<n;++i)for(int j=0;j<n;++j){
    if(v[i].first >= v[j].first || v[i].second >= v[j].second)continue;
    if(st.count(P(v[i].first,v[j].second)) && st.count(P(v[j].first,v[i].second)))++ans;
  }
  cout<<ans<<endl;
}
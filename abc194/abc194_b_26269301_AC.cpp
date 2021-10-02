/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/26269301
 * Submitted at: 2021-10-02 18:55:28
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_b
 * Result: AC
 * Execution Time: 12 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=100000000;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
    ans=min(ans,v[i].first+v[i].second);
  }
  for(int i=0;i<n;i++) for(int j=0;j<n;j++){
    if(i==j) continue;
    ans=min(ans,max(v[i].first,v[j].second));
  }
  cout<<ans<<endl;
}
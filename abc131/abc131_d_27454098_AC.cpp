/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/27454098
 * Submitted at: 2021-11-23 10:55:33
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_d
 * Result: AC
 * Execution Time: 106 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
int main(){
  int n;cin>>n;
  vector<P> v(n);
  for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
  sort(v.begin(),v.end(),[](P&a,P&b){return a.second<b.second;});
  ll cnt=0;
  bool chk=true;
  for(int i=0;i<n;i++){if(cnt+v[i].first<=v[i].second)cnt+=v[i].first;else chk=false;}
  puts(chk?"Yes":"No");
}
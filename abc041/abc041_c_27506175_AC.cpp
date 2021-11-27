/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc041/submissions/27506175
 * Submitted at: 2021-11-27 13:24:07
 * Problem URL: https://atcoder.jp/contests/abc041/tasks/abc041_c
 * Result: AC
 * Execution Time: 190 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++)cin>>v[i].first,v[i].second=i+1;
  sort(v.rbegin(),v.rend());
  for(pair<int,int> x:v)cout<<x.second<<endl;
}
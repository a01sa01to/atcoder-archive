/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc222/submissions/26468138
 * Submitted at: 2021-10-09 23:03:42
 * Problem URL: https://atcoder.jp/contests/abc222/tasks/abc222_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<pair<pair<int,int>,string>> a(2*n);
  for(int i=0;i<2*n;i++){a[i].first.first = 0;a[i].first.second=2*n-i-1;cin>>a[i].second;}
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      char x=a[2*j].second[i], y=a[2*j+1].second[i];
      if(x=='G'&&y=='C')a[2*j].first.first++;
      if(x=='C'&&y=='P')a[2*j].first.first++;
      if(x=='P'&&y=='G')a[2*j].first.first++;
      if(y=='G'&&x=='C')a[2*j+1].first.first++;
      if(y=='C'&&x=='P')a[2*j+1].first.first++;
      if(y=='P'&&x=='G')a[2*j+1].first.first++;
    }
    sort(a.begin(),a.end(),greater<pair<pair<int,int>,string>>());
  }
  for(int i=0;i<2*n;i++) cout<<2*n-a[i].first.second<<endl;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc013/submissions/27798596
 * Submitted at: 2021-12-11 00:00:13
 * Problem URL: https://atcoder.jp/contests/arc013/tasks/arc013_2
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<vector<int>> a(n,vector<int>(3));
  for(int i=0;i<n;++i){cin>>a[i][0]>>a[i][1]>>a[i][2];sort(a[i].begin(),a[i].end());}
  int x=0,y=0,z=0;
  for(int i=0;i<n;++i){x=max(x,a[i][0]);y=max(y,a[i][1]);z=max(z,a[i][2]);}
  cout<<x*y*z<<endl;
}
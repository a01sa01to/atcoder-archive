/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/hhkb2020/submissions/27034879
 * Submitted at: 2021-11-05 15:13:23
 * Problem URL: https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int h,w;
  cin>>h>>w;
  vector<string> Grid(h);
  rep(i,h) cin>>Grid[i];
  int ans=0;
  rep(i,h-1) rep(j,w) if(Grid[i][j] == '.' && Grid[i+1][j] == '.') ans++;
  rep(i,h) rep(j,w-1) if(Grid[i][j] == '.' && Grid[i][j+1] == '.') ans++;
  cout<<ans<<endl;
}
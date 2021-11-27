/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/27506061
 * Submitted at: 2021-11-27 13:12:16
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_b
 * Result: AC
 * Execution Time: 84 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector c(n,vector<int>(n));
  vector<int> a(n),b(n);
  pair<int,int> minim={1e9+3,-1};
  for(int i=0;i<n;i++)for(int j=0;j<n;j++){
    cin>>c[i][j];
    if(minim.first>c[i][j])minim={c[i][j],i};
  }
  a[minim.second]=0;
  for(int j=0;j<n;j++)b[j]=c[minim.second][j];
  for(int i=0;i<n;i++)a[i]=c[i][0]-b[0];
  bool chk=true;
  for(int i=0;i<n;i++)for(int j=0;j<n;j++){
    chk&=c[i][j]==a[i]+b[j];
  }
  puts(chk?"Yes":"No");
  if(chk){
    for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
    for(int i=0;i<n;i++)cout<<b[i]<<" ";cout<<endl;
  }
}
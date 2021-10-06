/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc107/submissions/26387420
 * Submitted at: 2021-10-06 22:34:32
 * Problem URL: https://atcoder.jp/contests/abc107/tasks/abc107_b
 * Result: AC
 * Execution Time: 13 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;cin>>h>>w;
  vector Grid(h,vector<int>(w));
  for(int i=0;i<h;i++) for(int j=0;j<w;j++){char c;cin>>c;Grid[i][j]=(c=='#'?1:0);}
  for(int _=0;_<100;_++){
    for(int i=0;i<h;i++){
      int s=0;
      for(int j=0;j<w;j++) s+=(Grid[i][j]==2?0:Grid[i][j]);
      if(s==0) for(int j=0;j<w;j++) Grid[i][j]=2;
    }
    for(int j=0;j<w;j++){
      int s=0;
      for(int i=0;i<h;i++) s+=(Grid[i][j]==2?0:Grid[i][j]);
      if(s==0) for(int i=0;i<h;i++) Grid[i][j]=2;
    }
  }
  for(int i=0;i<h;i++){
    bool p=false;
    for(int j=0;j<w;j++){
      if(Grid[i][j]==0) cout<<".";
      if(Grid[i][j]==1) cout<<"#";
      if(Grid[i][j]!=2) p=true;
    }
    if(p) cout<<endl;
  }
}
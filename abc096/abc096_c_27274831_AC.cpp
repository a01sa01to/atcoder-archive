/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc096/submissions/27274831
 * Submitted at: 2021-11-15 19:07:49
 * Problem URL: https://atcoder.jp/contests/abc096/tasks/abc096_c
 * Result: AC
 * Execution Time: 11 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;cin>>h>>w;
  vector<vector<bool>> Grid(h,vector<bool>(w));
  for(int i=0;i<h;i++)for(int j=0;j<w;j++){
    char c;cin>>c;Grid[i][j]=c=='#';
  }
  bool chk=true;
  for(int i=0;i<h;i++)for(int j=0;j<w;j++){
    bool u = (i!=0 && Grid[i][j] && Grid[i-1][j]);
    bool b = (i!=h-1 && Grid[i][j] && Grid[i+1][j]);
    bool l = (j!=0 && Grid[i][j] && Grid[i][j-1]);
    bool r = (j!=w-1 && Grid[i][j] && Grid[i][j+1]);
    if(Grid[i][j] && !(u||b||l||r))chk=false;
  }
  puts(chk?"Yes":"No");
}
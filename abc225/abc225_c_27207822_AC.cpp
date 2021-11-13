/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/27207822
 * Submitted at: 2021-11-13 18:58:59
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_c
 * Result: AC
 * Execution Time: 33 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  vector<vector<int>> Grid(n,vector<int>(m));
  for(int i=0;i<n;i++)for(int j=0;j<m;j++){cin>>Grid[i][j];Grid[i][j]--;}
  bool chk=true;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(i>0&&Grid[i][j]/7-1!=Grid[i-1][j]/7)chk=false;
      if(j>0&&Grid[i][j]/7!=Grid[i][j-1]/7)chk=false;
      if(j>0&&Grid[i][j]%7-1!=Grid[i][j-1]%7)chk=false;
      if(i>0&&Grid[i][j]%7!=Grid[i-1][j]%7)chk=false;
    }
  }
  puts(chk?"Yes":"No");
}
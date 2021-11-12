/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc021/submissions/27195796
 * Submitted at: 2021-11-12 23:48:43
 * Problem URL: https://atcoder.jp/contests/arc021/tasks/arc021_1
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<vector<int>> Grid(4,vector<int>(4));
  for(int i=0;i<4;i++)for(int j=0;j<4;j++)cin>>Grid[i][j];
  bool chk=false;
  for(int i=1;i<4;i++)for(int j=0;j<4;j++)if(Grid[i][j]==Grid[i-1][j])chk=true;  //うえ
  for(int i=0;i<3;i++)for(int j=0;j<4;j++)if(Grid[i][j]==Grid[i+1][j])chk=true;  //した
  for(int i=0;i<4;i++)for(int j=0;j<3;j++)if(Grid[i][j]==Grid[i][j+1])chk=true;  //みぎ
  for(int i=0;i<4;i++)for(int j=1;j<4;j++)if(Grid[i][j]==Grid[i][j-1])chk=true;  //ひだり
  puts(chk?"CONTINUE":"GAMEOVER");
}
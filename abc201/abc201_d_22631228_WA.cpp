/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc201/submissions/22631228
 * Submitted at: 2021-05-15 22:27:01
 * Problem URL: https://atcoder.jp/contests/abc201/tasks/abc201_d
 * Result: WA
 * Execution Time: 140 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ull1d = vector<ull>;
using ull2d = vector<ull1d>;
#define loop(i,n) for(ull i=0;i<n;i++)

int sign(char a){
  return -(a-',');
}

int main(){
  ull h,w;
  cin >> h >> w;
  if(h==1&&w==1){ cout << "Draw" << endl; return 0; }
  vector<vector<char>> v(h,vector<char>(w));
  // 高々 1999*2回の操作
  loop(i,h) loop(j,w){ cin >> v[i][j]; }
  ll x=w-1,y=h-1,tk=0,ao=0;
  loop(i, (h+w-2)){
    if(x==0){
      y--;
      if(i%2){ ao+=sign(v[y][0]); } else{ tk+=sign(v[y][0]); }
      continue;
    }
    if(y==0){
      x--;
      if(i%2){ ao+=sign(v[0][x]); } else{ tk+=sign(v[0][x]); }
      continue;
    }
    if(v[y][x-1] == '+'){
      x--;
      if(i%2){ ao++; } else{ tk++; }
      continue;
    }
    if(v[y-1][x] == '+'){
      y--;
      if(i%2){ ao++; } else{ tk++; }
      continue;
    }
    else{
      y--;
      if(i%2){ ao--; } else{ tk--; }
      continue;
    }
  }
  if(tk==ao){ cout << "Draw" << endl; }
  else if(tk<ao){ cout << "Aoki" << endl; }
  else{ cout << "Takahashi" << endl; }
  return 0;
}
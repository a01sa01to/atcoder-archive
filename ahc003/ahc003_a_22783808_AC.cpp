/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc003/submissions/22783808
 * Submitted at: 2021-05-22 16:09:58
 * Problem URL: https://atcoder.jp/contests/ahc003/tasks/ahc003_a
 * Result: AC
 * Execution Time: 34 ms
 */

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ull1d = vector<ull>;
using ull2d = vector<ull1d>;
using ull3d = vector<ull2d>;
#define loop(i,n) for(ull i=0;i<n;i++)
#define rloop(i,n) for(ull i=n-1;i>=0;i--)
#define all(vec) vec.begin(),vec.end()

string res = "";
ull x,y;
void move(char mode){
  switch (mode){
    case 'U': res += "U"; y--; break;
    case 'D': res += "D"; y++; break;
    case 'L': res += "L"; x--; break;
    case 'R': res += "R"; x++; break;
  }
  return;
}

ull3d Graph(30,ull2d(30,ull1d(4,0)));
// Graph[i][j] = {Up, Down, Left, Right}

int main(){ cout << fixed << setprecision(15);

  // ----- IF LOCAL ----- //
  // loop(i,30) loop(j,29){
  //   ull h; cin >> h;  // horizontal
  //   Graph[i][j][3] = h;
  //   Graph[i][j+1][2] = h;
  // }
  // loop(i,29) loop(j,30){
  //   ull v; cin >> v;  // vertical
  //   Graph[i][j][1] = v;
  //   Graph[i+1][j][0] = v;
  // }
  // ----- ENDIF LOCAL ----- //

  loop(b,1000){
    ll sx,sy,tx,ty; cin >> sy >> sx >> ty >> tx;

    // ----- IF LOCAL ----- //
    // double a,e; cin >> a >> e;
    // ----- ENDIF LOCAL ----- //

    res = "";
    x = sx, y=sy;
    while(y!=ty || x!=tx){
      // cout << x << " " << y << " | " << tx << " " << ty << endl;
      ull1d now = Graph[y][x];
      if(y==ty && x>tx){ loop(c,x-tx){ move('L'); } }
      else if(y==ty && x<tx){ loop(c,tx-x){ move('R'); } }
      else if(x==tx && y>ty){ loop(c,y-ty){ move('U'); } }
      else if(x==tx && y<ty){ loop(c,ty-y){ move('D'); } }
      else if(x>tx && y>ty){
        if(now[0] == 0){ move('U'); } else if(now[2] == 0){ move('L'); }
        else if(now[0] < now[2]){ move('U'); } else{ move('L'); }
      }
      else if(x>tx && y<ty){
        if(now[1] == 0){ move('D'); } else if(now[2] == 0){ move('L'); }
        else if(now[1] < now[2]){ move('D'); } else{ move('L'); }
      }
      else if(x<tx && y>ty){
        if(now[0] == 0){ move('U'); } else if(now[3] == 0){ move('R'); }
        else if(now[0] < now[3]){ move('U'); } else{ move('R'); }
      }
      else if(x<tx && y<ty){
        if(now[1] == 0){ move('D'); } else if(now[3] == 0){ move('R'); }
        else if(now[1] < now[3]){ move('D'); } else{ move('R'); }
      }
    }
    cout << res << endl;
    fflush(stdout);
    ull point; cin >> point;
    point /= res.size();
    x = sx, y=sy;
    loop(i,res.size()){
      switch(res[i]){
        case 'U':
          Graph[y][x][0] = max(Graph[y][x][0], point);
          Graph[y-1][x][1] = max(Graph[y-1][x][1], point);
          y--;
          break;
        case 'D':
          Graph[y][x][1] = max(Graph[y][x][1], point);
          Graph[y+1][x][0] = max(Graph[y+1][x][0], point);
          y++;
          break;
        case 'L':
          Graph[y][x][2] = max(Graph[y][x][2], point);
          Graph[y][x-1][3] = max(Graph[y][x-1][3], point);
          x--;
          break;
        case 'R':
          Graph[y][x][3] = max(Graph[y][x][3], point);
          Graph[y][x+1][2] = max(Graph[y][x+1][2], point);
          x++;
          break;
      }
    }
  }
  return 0;
}
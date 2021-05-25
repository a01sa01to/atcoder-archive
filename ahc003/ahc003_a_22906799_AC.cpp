/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc003/submissions/22906799
 * Submitted at: 2021-05-25 15:28:03
 * Problem URL: https://atcoder.jp/contests/ahc003/tasks/ahc003_a
 * Result: AC
 * Execution Time: 313 ms
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
#define rloop(i,n) for(ll i=n-1;i>=0;i--)
#define all(vec) vec.begin(),vec.end()
template<class T> inline bool chmin(T& a,T b){ if(a>b){ a=b; return true;} return false; }
template<class T> inline bool chmax(T& a,T b){ if(a>b){ a=b; return true;} return false; }

ull3d Graph(30,ull2d(30,ull1d(4,0)));
// Graph[i][j] = {Up, Down, Left, Right}

ull leng(string mode, ull x, ull y, ull tx, ull ty){
  ull ret = 0;
  loop(i,mode.size()){
    // cout << mode[i] << " | " << x << " " << y << " | " << tx << " " << ty << endl;
    switch(mode[i]){
      case 'U':
        if(y<=ty){ return 1e10; }
        else if(Graph[y][x][0] != 0){ ret += Graph[y][x][0]; }
        y--;
        break;
      case 'D':
        if(y>=ty){ return 1e10; }
        else if(Graph[y][x][1] != 0){ ret += Graph[y][x][1]; }
        y++;
        break;
      case 'L':
        if(x<=tx){ return 1e10; }
        else if(Graph[y][x][2] != 0){ ret += Graph[y][x][2]; }
        x--;
        break;
      case 'R':
        if(x>=tx){ return 1e10; }
        else if(Graph[y][x][3] != 0){ ret += Graph[y][x][3]; }
        x++;
        break;
    }
  }
  return ret;
}

int main(){ cout << fixed << setprecision(15);
  double prevScore = 0;

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

    string res = "";
    ll x = sx, y=sy;
    while(x!=tx || y!=ty){
      // cout << x << " " << y << " | " << tx << " " << ty << endl;
      if(y==ty && x>tx){ loop(c,x-tx){ res += "L"; x--; } }
      else if(y==ty && x<tx){ loop(c,tx-x){ res += "R"; x++; } }
      else if(x==tx && y>ty){ loop(c,y-ty){ res += "U"; y--; } }
      else if(x==tx && y<ty){ loop(c,ty-y){ res += "D"; y++; } }
      else{
        string best = ""; ll nx,ny; ull bestRoute=1e10;
        int bitLoop = min((ll)10, abs(x-tx)+abs(y-ty));
        loop(i,1<<bitLoop){
          string mode = ""; ll mx=0,my=0;
          if(x>tx && y>ty){
            // U or L
            loop(j,bitLoop){
              if(i & 1<<j){ mode += "U"; my--; }
              else{ mode += "L"; mx--; }
            }
          }
          else if(x>tx && y<ty){
            // D or L
            loop(j,bitLoop){
              if(i & 1<<j){ mode += "D"; my++; }
              else{ mode += "L"; mx--; }
            }
          }
          else if(x<tx && y>ty){
            // U or R
            loop(j,bitLoop){
              if(i & 1<<j){ mode += "U"; my--; }
              else{ mode += "R"; mx++; }
            }
          }
          else{
            // D or R
            loop(j,bitLoop){
              if(i & 1<<j){ mode += "D"; my++; }
              else{ mode += "R"; mx++; }
            }
          }
          ull tmpL = leng(mode,x,y,tx,ty);
          if(tmpL < bestRoute){
            bestRoute = tmpL;
            best = mode;
            nx = mx; ny = my;
          }
        }
        // cout << best << " | " << x << " " << y << " | " << nx << " " << ny << endl;
        res += best;
        x += nx; y += ny;
      }
    }
    cout << res << endl;

    // ----- IF NOT LOCAL ----- //
    fflush(stdout);
    ull point; cin >> point;
    double tmpScore = point;
    point = 1e10 - (point - (prevScore/0.998));
    point /= res.size();
    prevScore = tmpScore;
    x = sx, y=sy;
    loop(i,res.size()){
      switch(res[i]){
        case 'U':
          Graph[y][x][0] = (Graph[y][x][0] + point)/2;
          Graph[y-1][x][1] = (Graph[y-1][x][1] + point)/2;
          y--;
          break;
        case 'D':
          Graph[y][x][1] = (Graph[y][x][1] + point)/2;
          Graph[y+1][x][0] = (Graph[y+1][x][0] + point)/2;
          y++;
          break;
        case 'L':
          Graph[y][x][2] = (Graph[y][x][2], point)/2;
          Graph[y][x-1][3] = (Graph[y][x-1][3], point)/2;
          x--;
          break;
        case 'R':
          Graph[y][x][3] = (Graph[y][x][3], point)/2;
          Graph[y][x+1][2] = (Graph[y][x+1][2], point)/2;
          x++;
          break;
      }
    }
    // ----- ENDIF NOT LOCAL ----- //
  }
  return 0;
}
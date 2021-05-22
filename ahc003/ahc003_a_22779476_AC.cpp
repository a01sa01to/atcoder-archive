/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc003/submissions/22779476
 * Submitted at: 2021-05-22 13:00:11
 * Problem URL: https://atcoder.jp/contests/ahc003/tasks/ahc003_a
 * Result: AC
 * Execution Time: 35 ms
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

int main(){ cout << fixed << setprecision(15);

  // ----- IF LOCAL ----- //
  // ull3d Graph(30,ull2d(30,ull1d(4,0)));
  // // Graph[i][j] = {Up, Down, Left, Right}
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
    if(sy > ty){ loop(c,sy-ty){ res+="U"; } }
    if(sy < ty){ loop(c,ty-sy){ res+="D"; } }
    if(sx > tx){ loop(c,sx-tx){ res+="L"; } }
    if(sx < tx){ loop(c,tx-sx){ res+="R"; } }
    // if(sy > ty){ res += "U"+to_string(sy-ty); }
    // if(sy < ty){ res += "D"+to_string(ty-sy); }
    // if(sx > tx){ res += "L"+to_string(sx-tx); }
    // if(sx < tx){ res += "R"+to_string(tx-sx); }
    // res += "(sy:"+to_string(sy)+",sx:"+to_string(sx)+",ty:"+to_string(ty)+",tx:"+to_string(tx)+")";
    cout << res << endl;
    // cout << b << endl;
    fflush(stdout);
    ll point; cin >> point;
  }
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/23171832
 * Submitted at: 2021-06-04 23:04:19
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_d
 * Result: AC
 * Execution Time: 887 ms
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

int main(){ cout << fixed << setprecision(15);
  ull h,w; cin >> h >> w;
  ull2d v(h,ull1d(w,0));
  ull2d res(h,ull1d(w,0));
  loop(i,h) loop(j,w){ cin >> v[i][j]; }
  loop(i,h){
    ull sum = 0;
    loop(j,w){ sum += v[i][j]; }
    loop(j,w){ res[i][j] += sum; }
  }
  loop(j,w){
    ull sum = 0;
    loop(i,h){ sum += v[i][j]; }
    loop(i,h){ res[i][j] += sum; }
  }
  loop(i,h) loop(j,w){ res[i][j] -= v[i][j]; }
  loop(i,h){
    loop(j,w){ cout << res[i][j] << " "; }
    cout << endl;
  }
  return 0;
}
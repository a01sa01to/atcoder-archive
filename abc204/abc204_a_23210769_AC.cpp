/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/23210769
 * Submitted at: 2021-06-06 21:01:12
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_a
 * Result: AC
 * Execution Time: 10 ms
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
  int a,b;
  cin >> a >> b;
  int c;
  if(a == b){ c = a; }
  else{ c = 3 - a - b; }
  cout << c << endl;
  return 0;
}
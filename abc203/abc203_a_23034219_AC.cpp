/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc203/submissions/23034219
 * Submitted at: 2021-05-30 21:01:20
 * Problem URL: https://atcoder.jp/contests/abc203/tasks/abc203_a
 * Result: AC
 * Execution Time: 7 ms
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
  int a,b,c;
  cin >> a >> b >> c;
  if(a==b){ cout << c << endl; }
  else if(c==b){ cout << a << endl; }
  else if(a==c){ cout << b << endl; }
  else{ cout << 0 << endl; }
  return 0;
}
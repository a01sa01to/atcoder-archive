/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc205/submissions/23460333
 * Submitted at: 2021-06-14 01:27:43
 * Problem URL: https://atcoder.jp/contests/abc205/tasks/abc205_c
 * Result: WA
 * Execution Time: 8 ms
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
  ll a,b,c;
  cin >> a >> b >> c;
  c = (c%2)?2:1;
  a=pow(a,c), b=pow(b,c);
  if(a==b){ cout << "="; }
  if(a<b){ cout << "<"; }
  if(a>b){ cout << ">"; }
  cout << endl;
  return 0;
}
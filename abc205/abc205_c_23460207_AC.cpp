/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc205/submissions/23460207
 * Submitted at: 2021-06-14 01:19:25
 * Problem URL: https://atcoder.jp/contests/abc205/tasks/abc205_c
 * Result: AC
 * Execution Time: 6 ms
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
  if(a==b){ cout << "="; }
  else if(a==-b && c%2==0){ cout << "="; }
  else if(c%2==0 && abs(a)>abs(b)){ cout << ">"; }
  else if(c%2==0 && abs(b)>abs(a)){ cout << "<"; }
  else if(c%2==1 && a<b){ cout << "<"; }
  else if(c%2==1 && a>b){ cout << ">"; }
  cout << endl;
  return 0;
}
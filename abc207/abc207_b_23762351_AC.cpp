/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc207/submissions/23762351
 * Submitted at: 2021-06-26 21:06:15
 * Problem URL: https://atcoder.jp/contests/abc207/tasks/abc207_b
 * Result: AC
 * Execution Time: 9 ms
 */

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ull> ull1d;
typedef vector<ull1d> ull2d;
typedef vector<ull2d> ull3d;
#define loop(i,n) for(ull i=0;i<n;i++)
#define rloop(i,n) for(ll i=n-1;i>=0;i--)
#define all(vec) vec.begin(),vec.end()
template<class T> inline bool chmin(T& a,T b){ if(a>b){ a=b; return true;} return false; }
template<class T> inline bool chmax(T& a,T b){ if(a>b){ a=b; return true;} return false; }

int main(){ cout << fixed << setprecision(15);
  double a,b,c,d;
  cin >> a >> b >> c >> d;
  int x = ceil(a/(d*c-b));
  if(x<0){ cout << -1 << endl; }
  else{ cout << x << endl; }
  return 0;
}
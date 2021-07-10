/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc209/submissions/24101976
 * Submitted at: 2021-07-10 21:01:02
 * Problem URL: https://atcoder.jp/contests/abc209/tasks/abc209_a
 * Result: AC
 * Execution Time: 8 ms
 */

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

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
  int a,b;
  cin >> a >> b;
  if(b < a){ cout << 0 << endl; }
  else{ cout << (b-a+1) << endl; }
  return 0;
}
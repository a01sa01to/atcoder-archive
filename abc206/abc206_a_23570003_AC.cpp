/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc206/submissions/23570003
 * Submitted at: 2021-06-19 21:01:41
 * Problem URL: https://atcoder.jp/contests/abc206/tasks/abc206_a
 * Result: AC
 * Execution Time: 3 ms
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
  double n;
  cin >> n;
  n *= 1.08;
  n = floor(n);
  if(n < 206){ cout << "Yay!" << endl; }
  else if(n == 206){ cout << "so-so" << endl; }
  else{ cout << ":(" << endl; }
  return 0;
}
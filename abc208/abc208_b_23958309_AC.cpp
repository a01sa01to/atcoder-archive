/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc208/submissions/23958309
 * Submitted at: 2021-07-04 21:06:41
 * Problem URL: https://atcoder.jp/contests/abc208/tasks/abc208_b
 * Result: AC
 * Execution Time: 8 ms
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

ull fact(int a){
  ull res = 1;
  for(int i=1;i<=a;i++){
    res *= i;
  }
  return res;
}

int main(){ cout << fixed << setprecision(15);
  ull p;
  cin >> p;
  int ans = 0;
  for(int i=10;i>=1;i--){
    ull a = fact(i);
    ans += p/a;
    p %= a;
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc208/submissions/23949227
 * Submitted at: 2021-07-04 21:01:14
 * Problem URL: https://atcoder.jp/contests/abc208/tasks/abc208_a
 * Result: AC
 * Execution Time: 6 ms
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
  int a,b;
  cin >> a >> b;
  if(6*a < b || a > b){
    cout << "No" << endl;
  }
  else{
    cout << "Yes" << endl;
  }
  return 0;
}
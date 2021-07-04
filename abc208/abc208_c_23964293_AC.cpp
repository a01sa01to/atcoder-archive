/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc208/submissions/23964293
 * Submitted at: 2021-07-04 21:13:12
 * Problem URL: https://atcoder.jp/contests/abc208/tasks/abc208_c
 * Result: AC
 * Execution Time: 1082 ms
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
  ull n,k;
  cin >> n >> k;
  ull2d v(n, ull1d(3));
  loop(i,n){
    v[i][0] = i;
    cin >> v[i][1];
    v[i][2] = k/n;
  }
  sort(all(v),[](auto& a, auto& b){ return a[1] < b[1]; });
  k %= n;
  loop(i,k){ v[i][2]++; }
  sort(all(v),[](auto& a, auto& b){ return a[0] < b[0]; });
  loop(i,n){
    cout << v[i][2] << endl;
  }
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/23238750
 * Submitted at: 2021-06-06 21:42:21
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_d
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

ull1d t;

bool solve(ll mid){
  int a=0,b=0;
  loop(i,t.size()){
    if(a+t[i] <= b){ a += t[i]; }
    else{ b += t[i]; }
  }
  if(mid >= max(a,b)){ return true; }
  return false;
}

int main(){ cout << fixed << setprecision(15);
  int n;
  cin >> n;
  t.resize(n);
  loop(i,n){ cin >> t[i]; }
  sort(all(t),greater<ull>());
  ll ok=1e5, ng=0;
  while(abs(ok - ng) > 1){
    ll mid = (ok + ng)/2;
    if(solve(mid)){ ok = mid; }
    else{ ng = mid; }
  }
  cout << ok << endl;
  return 0;
}
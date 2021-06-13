/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc205/submissions/23447498
 * Submitted at: 2021-06-13 22:24:45
 * Problem URL: https://atcoder.jp/contests/abc205/tasks/abc205_d
 * Result: AC
 * Execution Time: 253 ms
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
  ll n,q;
  cin >> n >> q;
  ull1d v(n+1,0);
  loop(i,n){ cin >> v[i+1]; }
  loop(i,q){
    ll k; cin >> k;
    // cout << "===" << endl;
    if(v[1]-1 >= k){ cout << k << endl; continue; }
    if(v[n]-n < k){ cout << k+n << endl; continue; }
    // cout << k << endl;
    ll ok=n, ng=-1;
    while(abs(ok - ng) > 1){
      ll mid = (ok + ng)/2;
      // cout << mid << " " << v[mid]-(mid) << endl;
      // v[i]-i 個が異なる
      if(v[mid]-mid >= k){ ok = mid; }
      else{ ng = mid; }
    }
    ok--;
    // cout << "---" << endl;
    // cout << ok << " " << v[ok] << endl;
    cout << k+ok << endl;
  }
  return 0;
}
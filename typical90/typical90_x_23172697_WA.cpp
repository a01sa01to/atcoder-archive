/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/23172697
 * Submitted at: 2021-06-04 23:42:57
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_x
 * Result: WA
 * Execution Time: 10 ms
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
  ll n,k;
  cin >> n >> k;
  ll c = 0;
  vector<ll> a(n), b(n);
  loop(i,n){ cin >> a[i]; }
  loop(i,n){ cin >> b[i]; }
  loop(i,n){ c += abs(a[i] - b[i]); }
  if(c == k || abs(c-k)%2 == 0){ cout << "Yes" << endl; }
  else{ cout << "No" << endl; }
  return 0;
}
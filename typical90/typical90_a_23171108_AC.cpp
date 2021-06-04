/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/23171108
 * Submitted at: 2021-06-04 22:31:29
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_a
 * Result: AC
 * Execution Time: 45 ms
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

ull n,l,k;
ull1d a;

bool solve(ull mid){
  ull c = 1;
  ull prev = 0;
  loop(i,n){
    if(a[i] - prev >= mid && l - a[i] >= mid){
      c++;
      prev = a[i];
    }
  }
  return c > k;
}

int main(){ cout << fixed << setprecision(15);
  cin >> n >> l >> k;
  a.resize(n+1);
  loop(i,n){ cin >> a[i]; }
  a[n++] = l;
  ll left=0,right=l+1;
  while(right-left > 1){
    ll mid = (left + right)/2;
    if(solve(mid)){ left = mid; }
    else{ right = mid; }
  }
  cout << left << endl;
  return 0;
}
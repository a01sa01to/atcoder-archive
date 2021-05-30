/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc203/submissions/23048601
 * Submitted at: 2021-05-30 21:11:14
 * Problem URL: https://atcoder.jp/contests/abc203/tasks/abc203_c
 * Result: AC
 * Execution Time: 516 ms
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
  int n,k;
  cin >> n >> k;
  ll c=k;
  ull2d v(n,ull1d(2,0));
  loop(i,n){
    ull a,b;
    cin >> a >> b;
    v[i] = {a,b};
  }
  sort(all(v), [](ull1d& a, ull1d& b){ return a[0] < b[0]; });
  loop(i,n){
    if(c < v[i][0]){ break; }
    else{ c += v[i][1]; }
  }
  cout << c << endl;
  return 0;
}
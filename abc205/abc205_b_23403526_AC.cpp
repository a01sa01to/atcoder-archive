/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc205/submissions/23403526
 * Submitted at: 2021-06-13 21:03:29
 * Problem URL: https://atcoder.jp/contests/abc205/tasks/abc205_b
 * Result: AC
 * Execution Time: 6 ms
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
  int n;
  cin >> n;
  vector<int> v(n,0);
  loop(i,n){
    int a;
    cin >> a;
    v[--a]++;
    if(v[a] > 1){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
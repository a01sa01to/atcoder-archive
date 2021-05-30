/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc203/submissions/23040604
 * Submitted at: 2021-05-30 21:04:06
 * Problem URL: https://atcoder.jp/contests/abc203/tasks/abc203_b
 * Result: AC
 * Execution Time: 9 ms
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
  ull c=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
      c += i*100 + j;
    }
  }
  cout << c << endl;
  return 0;
}
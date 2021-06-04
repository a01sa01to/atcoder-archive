/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/23173176
 * Submitted at: 2021-06-05 00:12:41
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bc
 * Result: AC
 * Execution Time: 2031 ms
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
  ull n, p, q; cin >> n >> p >> q;
  ull1d a(n);
  ull c = 0;
  loop(i,n){ cin >> a[i]; }
  for(ull i=4;i<n;i++) for(ull j=3;j<i;j++) for(ull k=2;k<j;k++) for(ull l=1;l<k;l++) for(ull m=0;m<l;m++){
    if(a[i]*a[j]%p*a[k]%p*a[l]%p*a[m]%p == q) c++;
  }
  cout << c << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/23172140
 * Submitted at: 2021-06-04 23:17:48
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_j
 * Result: AC
 * Execution Time: 223 ms
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
  int n; cin >> n;
  vector<int> cls1(n+1,0), cls2(n+1,0);
  loop(i,n){
    int c,p;
    cin >> c >> p;
    if(c-1){
      cls1[i+1] = cls1[i];
      cls2[i+1] = cls2[i] + p;
    }
    else{
      cls1[i+1] = cls1[i] + p;
      cls2[i+1] = cls2[i];
    }
  }
  int q; cin >> q;
  loop(i,q){
    int a,b; cin >> a >> b;
    cout << (cls1[b]-cls1[--a]) << " " << (cls2[b]-cls2[a]) << endl;
  }
  return 0;
}
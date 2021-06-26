/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc207/submissions/23776113
 * Submitted at: 2021-06-26 21:24:57
 * Problem URL: https://atcoder.jp/contests/abc207/tasks/abc207_c
 * Result: AC
 * Execution Time: 29 ms
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

int main(){ cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector<vector<double>> a(n,vector<double>(2,0));
  loop(i,n){
    double t,l,r;
    cin >> t >> l >> r;
    if(t == 2){ r-=0.1; }
    if(t == 3){ l+=0.1; }
    if(t == 4){ l+=0.1; r-=0.1; }
    a[i][0] = l;
    a[i][1] = r;
  }
  ull c=0;
  for(ull i=0;i<n-1;i++) for(ull j=i+1;j<n;j++){
    if(a[i][0] <= a[j][1] && a[j][0] <= a[i][1]){
      c++;
    }
  }
  cout << c << endl;
  return 0;
}
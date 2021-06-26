/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc207/submissions/23799072
 * Submitted at: 2021-06-26 22:37:22
 * Problem URL: https://atcoder.jp/contests/abc207/tasks/abc207_d
 * Result: WA
 * Execution Time: 2205 ms
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

const double pi = 3.141592653589793238;

int main(){ cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector<pair<double,double>> from(n), to(n), tmp(n);
  loop(i,n){
    double a,b;
    cin >> a >> b;
    from[i] = make_pair(a,b);
  }
  loop(i,n){
    double c,d;
    cin >> c >> d;
    to[i] = make_pair(c,d);
  }
  sort(all(to));
  bool allcan = false;
  for(double x=-20;x<=20;x++){
    if(!allcan) for(double y=-20;y<=20;y++){
      if(!allcan) for(double theta=1;theta<36;theta++){
        if(!allcan) for(int i=0;i<n;i++){
          tmp[i] = make_pair(
            (from[i].first+x)*cos(theta*pi/18)
             - (from[i].second+y)*sin(theta*pi/18),
            (from[i].first+x)*sin(theta*pi/18)
             + (from[i].second+y)*cos(theta*pi/18)
            );
        }
        sort(all(tmp));
        bool can = true;
        for(int i=0;i<n;i++){
          if(abs(tmp[i].first - to[i].first) >= 1 || abs(tmp[i].second - to[i].second) >= 1){
            can = false;
            break;
          }
        }
        if(can){ allcan = true; }
      }
    }
  }
  cout << (allcan ? "Yes" : "No") << endl;
  return 0;
}
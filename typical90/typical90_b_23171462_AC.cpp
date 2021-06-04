/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/23171462
 * Submitted at: 2021-06-04 22:48:30
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_b
 * Result: AC
 * Execution Time: 214 ms
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

bool check(string s){
  int dep = 0;
  loop(i,s.size()){
    if(s[i] == '(') dep++;
    else dep--;
    if(dep < 0){ return false; }
  }
  if(dep == 0){ return true; }
  return false;
}

int main(){ cout << fixed << setprecision(15);
  int n;
  cin >> n;
  if(n % 2 == 1){ return 0; }
  loop(i, 1<<n){
    string s = "";
    rloop(j,n){
      if(i & (1<<j)){ s += ")"; }
      else{ s += "("; }
    }
    if(check(s)){ cout << s << endl; }
  }
  return 0;
}
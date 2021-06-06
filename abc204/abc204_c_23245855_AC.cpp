/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/23245855
 * Submitted at: 2021-06-06 22:08:16
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_c
 * Result: AC
 * Execution Time: 349 ms
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

vector<bool> seen;
ull2d Graph;
ull c = 0;

void dfs(ull v) {
  seen[v] = true;
  c++;
  for (ull next_v : Graph[v]) {
    if(seen[next_v]) continue;
    dfs(next_v);
  }
}

int main(){ cout << fixed << setprecision(15);
  ull n,m;
  cin >> n >> m;
  seen.resize(n);
  Graph.resize(n);
  loop(i,m){
    ull a,b;
    cin >> a >> b;
    Graph[a-1].push_back(b - 1);
  }
  loop(i,n){
    seen.assign(n,false);
    dfs(i);
  }
  cout << c << endl;
  return 0;
}
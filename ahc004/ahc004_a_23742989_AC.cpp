/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc004/submissions/23742989
 * Submitted at: 2021-06-26 14:15:57
 * Problem URL: https://atcoder.jp/contests/ahc004/tasks/ahc004_a
 * Result: AC
 * Execution Time: 20 ms
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
  int n,m;
  cin >> n >> m;
  vector<string> a,b(m);
  loop(i,m){ cin >> b[i]; }
  sort(all(b),[](string &x, string &y){ return x.size() > y.size(); });
  loop(i,b.size()) for(int j=i+1;j<b.size();j++){
    if(b[i].find(b[j]) != string::npos){
      b.erase(b.begin()+j);
    }
  }
  string prev = "";
  loop(i,b.size()){
    if(prev.size() + b[i].size() > n){
      int l = n-prev.size();
      auto itr = find_if(all(b),[l](string x){ return x.size() == l; });
      if(itr == b.end()){
        loop(j,l){ prev += "."; }
      }
      else{
        prev += *itr;
        b.erase(itr);
      }
      a.push_back(prev);
      prev = "";
    }
    prev += b[i];
  }
  loop(i,n){
    cout << a[i] << endl;
  }
  return 0;
}
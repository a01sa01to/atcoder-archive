/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc221/submissions/26279289
 * Submitted at: 2021-10-02 21:05:05
 * Problem URL: https://atcoder.jp/contests/abc221/tasks/abc221_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s,t;
  cin>>s>>t;
  if(s==t){cout<<"Yes"<<endl;return 0;}
  rep(i,s.size()-1){
    if(s[i] != t[i]){
      swap(s[i],s[i+1]);
      if(s!=t){cout<<"No"<<endl;return 0;}
      else cout <<"Yes"<<endl;
    }
  }
  return 0;
}

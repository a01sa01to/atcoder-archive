/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/20558727
 * Submitted at: 2021-02-28 00:23:39
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc081_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n, c=0;
  cin >> n;
  vector<ll> v={};
  for(ll i=0;i<n;i++){
    ll a;
    cin >> a;
    v.push_back(a);
  }
  while(true){
    for(ll i=0;i<n;i++){
      if(v[i] % 2 == 0){
        v[i] /= 2;
      }
      else{
        cout << c << endl;
        return 0;
      }
    }
    c++;
  }
}
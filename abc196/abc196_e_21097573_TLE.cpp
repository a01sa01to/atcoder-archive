/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc196/submissions/21097573
 * Submitted at: 2021-03-20 22:14:02
 * Problem URL: https://atcoder.jp/contests/abc196/tasks/abc196_e
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define loop(n,i) for(ll i=0;i<n;i++)

ll f(ll a,ll t,ll x){
  switch(t){
    case 1:
      return x+a;
    case 2:
      return max(x,a);
    case 3:
      return min(x,a);
  }
}

int main(){
  ll n,q;
  vector<ll> a,t;
  cin >> n;
  loop(n,i){
    ll b,c;
    cin >> b >> c;
    a.push_back(b);
    t.push_back(c);
  }
  cin >> q;
  loop(q,i){
    ll x;
    cin >> x;
    loop(n,j){
      x = f(a[j],t[j],x);
    }
    cout << x << endl;
  }
  return 0;
}
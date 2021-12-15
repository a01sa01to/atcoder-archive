/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc188/submissions/27920970
 * Submitted at: 2021-12-15 14:22:24
 * Problem URL: https://atcoder.jp/contests/abc188/tasks/abc188_d
 * Result: AC
 * Execution Time: 1050 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef tuple<ll, ll, ll> TP;
int main() {
  ll n, c;
  cin >> n >> c;
  set<ll> st;
  map<ll, ll> mp, mpinv;
  vector<TP> v(n);
  rep(i, n) {
    ll x, y, z;
    cin >> x >> y >> z;
    v[i] = { x, y, z };
    st.insert(x);
    st.insert(y + 1);
  }
  vector<ll> imos;
  // 座圧
  {
    ll i = 0;
    for (ll x : st) {
      mp[x] = i;
      mpinv[i] = x;
      ++i;
    }
    imos.assign(i, 0);
  }
  rep(i, n) {
    auto [x, y, z] = v[i];
    imos[mp[x]] += z;
    imos[mp[y + 1]] -= z;
  }
  rep(i, imos.size() - 1) imos[i + 1] += imos[i];
  ll ans = 0;
  rep(i, imos.size()) {
    ans += min(c, imos[i]) * (mpinv[i + 1] - mpinv[i]);
  }
  cout << ans << endl;
  return 0;
}
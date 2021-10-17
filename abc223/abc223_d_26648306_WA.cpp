/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc223/submissions/26648306
 * Submitted at: 2021-10-17 22:18:26
 * Problem URL: https://atcoder.jp/contests/abc223/tasks/abc223_d
 * Result: WA
 * Execution Time: 1994 ms
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
  int n, m;
  cin >> n >> m;
  set<P> st;
  ll1d a(n);
  map<ll, ll> mp;
  vector<bool> used(n, false);
  rep(i, n) {
    a[i] = i;
    mp[i] = i;
  }
  rep(i, m) {
    ll x, y;
    cin >> x >> y;
    x--, y--;
    if (st.count({ x, y })) {
      cout << -1 << endl;
      return 0;
    }
    st.insert({ y, x });
    if (mp[x] > mp[y]) {
      rotate(a.begin() + mp[y], a.begin() + mp[y] + 1, a.begin() + mp[x] + 1);
      mp[y] = mp[x]--;
    }
    else if (used[y]) {
      cout << -1 << endl;
      return 0;
    }
  }
  rep(i, n) {
    cout << a[i] + 1 << " ";
  }
  cout << endl;
  return 0;
}
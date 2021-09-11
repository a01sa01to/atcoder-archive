/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/25779244
 * Submitted at: 2021-09-11 22:22:08
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_e
 * Result: AC
 * Execution Time: 156 ms
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
typedef tuple<ll, ll, ll> TP;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, m;
  cin >> n >> m;
  dsu d(n);
  vector<TP> Query;
  ll ans = 0;
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    if (c < 0) {
      d.merge(a, b);
    }
    else {
      Query.push_back({ a, b, c });
    }
  }
  sort(all(Query), [](TP& a, TP& b) {
    return get<2>(a) < get<2>(b);
  });
  rep(i, Query.size()) {
    auto [a, b, c] = Query[i];
    if (d.same(a, b)) {
      ans += c;
    }
    else {
      d.merge(a, b);
    }
  }
  cout << ans << endl;
  return 0;
}
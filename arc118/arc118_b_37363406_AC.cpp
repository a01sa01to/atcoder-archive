/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc118/submissions/37363406
 * Submitted at: 2022-12-18 00:36:43
 * Problem URL: https://atcoder.jp/contests/arc118/tasks/arc118_b
 * Result: AC
 * Execution Time: 177 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool sol(ll &mid, ll &n, ll &m, vector<ll> &a, vector<ll> &b, bool construct) {
  vector<ll> l(a.size()), r(a.size());
  rep(i, a.size()) {
    l[i] = max(0LL, (m * a[i] - mid + n - 1) / n);
    r[i] = (m * a[i] + mid) / n;
  }
  Debug(mid, a, l, r);
  ll L = accumulate(l.begin(), l.end(), 0LL);
  ll R = accumulate(r.begin(), r.end(), 0LL);
  if (!construct) {
    return (L <= m && m <= R);
  }
  else {
    rep(i, a.size()) {
      ll tmp = min(m - L, r[i] - l[i]);
      b[i] = l[i] + tmp;
      L += tmp;
    }
    return true;
  }
}

int main() {
  ll k, n, m;
  cin >> k >> n >> m;
  vector<ll> a(k), b(k);
  rep(i, k) cin >> a[i];
  ll ok = 1e18, ng = -1;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    Debug(ok, ng, mid);
    (sol(mid, n, m, a, b, false) ? ok : ng) = mid;
  }
  sol(ok, n, m, a, b, true);
  rep(i, k) cout << b[i] << " ";
  cout << endl;
  return 0;
}
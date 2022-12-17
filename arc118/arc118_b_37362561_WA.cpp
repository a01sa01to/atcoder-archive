/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc118/submissions/37362561
 * Submitted at: 2022-12-18 00:00:01
 * Problem URL: https://atcoder.jp/contests/arc118/tasks/arc118_b
 * Result: WA
 * Execution Time: 2205 ms
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

bool sol(ll &mid, ll &n, ll &m, vector<ll> &a, vector<ll> &b) {
  vector<ll> l(a.size()), r(a.size());
  rep(i, a.size()) {
    l[i] = (m * a[i] - mid - 1) / n + 1;
    r[i] = (m * a[i] + mid) / n;
  }
  ll L = accumulate(l.begin(), l.end(), 0LL);
  ll R = accumulate(r.begin(), r.end(), 0LL);
  if (L <= m && m <= R) {
    ll t = m - L;
    rep(i, a.size()) {
      if (r[i] - l[i] >= t) {
        b[i] = l[i] + t;
        t = 0;
      }
      else {
        b[i] = r[i];
        t -= r[i] - l[i];
      }
    }
    return true;
  }
  return false;
}

int main() {
  ll k, n, m;
  cin >> k >> n >> m;
  vector<ll> a(k);
  rep(i, n) cin >> a[i];
  vector<ll> b(k);
  ll ok = 1e9, ng = 0;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    (sol(mid, n, m, a, b) ? ok : ng) = mid;
  }
  rep(i, k) cout << b[i] << " ";
  cout << endl;
  return 0;
}
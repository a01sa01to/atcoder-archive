/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc216/submissions/36884942
 * Submitted at: 2022-11-30 00:04:01
 * Problem URL: https://atcoder.jp/contests/abc216/tasks/abc216_e
 * Result: AC
 * Execution Time: 51 ms
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

ll cnt(const vector<ll>& a, const ll x, const ll k) {
  ll ret = 0;
  rep(i, a.size()) {
    ret += max(0LL, a[i] - x + 1);
  }
  return ret;
}

inline ll f(ll x) { return x * (x + 1) / 2; }

ll sim(const vector<ll>& a, const ll x) {
  ll ret = 0;
  rep(i, a.size()) {
    ret += max(0LL, f(a[i]) - f(x - 1));
  }
  return ret;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  ll ok = 2e9 + 1, ng = 0;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    (cnt(a, mid, k) <= k ? ok : ng) = mid;
  }
  Debug(ok);
  ll ans = sim(a, ok);
  Debug(ans);
  ans += (k - cnt(a, ok, k)) * (ok - 1);
  Debug(ans);
  cout << ans << endl;
  return 0;
}
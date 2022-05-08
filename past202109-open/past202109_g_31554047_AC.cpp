/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202109-open/submissions/31554047
 * Submitted at: 2022-05-09 00:16:36
 * Problem URL: https://atcoder.jp/contests/past202109-open/tasks/past202109_g
 * Result: AC
 * Execution Time: 152 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef tuple<ll, ll, ll> TP;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<TP> v;
  rep(i, n) {
    ll a, b, c;
    cin >> a >> b >> c;
    v.push_back({ a, b, c });
  }
  ll ng = 0, ok = 1e18;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    ll cnt = 0;
    rep(i, n) {
      auto [a, b, c] = v[i];
      if (mid < b) continue;
      ll x = (mid - b) / c + 1;
      cnt += min(x, a);
    }
    if (cnt >= k)
      ok = mid;
    else
      ng = mid;
  }
  cout << ok << endl;
}
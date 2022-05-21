/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31881554
 * Submitted at: 2022-05-22 00:07:46
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_f
 * Result: AC
 * Execution Time: 108 ms
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

int main() {
  ll n, l;
  cin >> n >> l;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  priority_queue<ll, vector<ll>, greater<>> pq;
  ll rest = l - accumulate(a.begin(), a.end(), 0LL);
  pq.push(rest);
  rep(i, n) pq.push(a[i]);

  ll ans = 0;
  while (!pq.empty()) {
    if (pq.top() == 0) {
      pq.pop();
      continue;
    }
    if (pq.size() == 1) {
      break;
    }
    ll x = pq.top();
    pq.pop();
    ll y = pq.top();
    pq.pop();
    ans += x + y;
    pq.push(x + y);
  }
  cout << ans << endl;
  return 0;
}
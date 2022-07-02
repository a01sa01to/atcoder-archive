/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32924096
 * Submitted at: 2022-07-02 22:17:46
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_e
 * Result: AC
 * Execution Time: 445 ms
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
  ll n, q, _x;
  cin >> n >> q >> _x;
  vector<ll> w(n);
  rep(i, n) cin >> w[i];
  rep(i, n) w.push_back(w[i]);
  vector<ll> sum(2 * n + 1, 0);
  rep(i, 2 * n) sum[i + 1] = sum[i] + w[i];
  Debug(sum);
  vector<ll> ans(0);
  ll rb = 0, rs = 0;
  {
    vector<ll> visited(n, -1);
    ll idx = 0;
    while (true) {
      if (visited[idx] != -1) {
        rb = visited[idx];
        rs = ans.size() - visited[idx];
        break;
      }
      visited[idx] = ans.size();
      ll x = _x;
      ll cnt = n * (x / sum[n]);
      x %= sum[n];
      auto itr = lower_bound(sum.begin(), sum.end(), x + sum[idx]);
      Debug(sum[idx], idx, *itr, itr - sum.begin());
      ans.push_back(itr - sum.begin() + cnt - idx);
      idx = (itr - sum.begin());
      idx %= n;
      Debug(idx, visited[idx]);
    }
  }
  Debug(ans, rb, rs);
  while (q--) {
    ll k;
    cin >> k;
    --k;
    if (k < rb) {
      cout << ans[k] << endl;
    }
    else {
      k -= rb;
      k %= rs;
      k += rb;
      cout << ans[k] << endl;
    }
  }
  return 0;
}
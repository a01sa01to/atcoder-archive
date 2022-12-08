/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc184/submissions/37099864
 * Submitted at: 2022-12-09 00:35:12
 * Problem URL: https://atcoder.jp/contests/abc184/tasks/abc184_f
 * Result: AC
 * Execution Time: 292 ms
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

void List(vector<ll>& data, vector<ll>& res, ll t) {
  rep(bit, 1 << data.size()) {
    ll sum = 0;
    rep(i, data.size()) {
      if (bit & (1 << i)) sum += data[i];
    }
    if (sum <= t) res.push_back(sum);
  }
  sort(res.begin(), res.end());
}

int main() {
  ll n, t;
  cin >> n >> t;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> left(a.begin(), a.begin() + n / 2);
  vector<ll> right(a.begin() + n / 2, a.end());
  vector<ll> left_list, right_list;
  List(left, left_list, t);
  List(right, right_list, t);
  ll ans = 0;
  for (auto l : left_list) {
    auto it = upper_bound(right_list.begin(), right_list.end(), t - l);
    if (it != right_list.begin()) {
      it--;
      if (l + *it == 0) continue;
      ans = max(ans, l + *it);
    }
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc017/submissions/34510196
 * Submitted at: 2022-09-02 19:24:33
 * Problem URL: https://atcoder.jp/contests/arc017/tasks/arc017_3
 * Result: AC
 * Execution Time: 31 ms
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

int main() {
  ll n, x;
  cin >> n >> x;
  vector<ll> w(n);
  rep(i, n) cin >> w[i];

  ll mid = (n + 1) / 2;
  vector<ll> w1(w.begin(), w.begin() + mid);
  vector<ll> w2(w.begin() + mid, w.end());
  vector<ll> s1, s2;
  rep(i, 1 << w1.size()) {
    ll sum = 0;
    rep(j, w1.size()) {
      if (i >> j & 1) sum += w1[j];
    }
    s1.push_back(sum);
  }
  rep(i, 1 << w2.size()) {
    ll sum = 0;
    rep(j, w2.size()) {
      if (i >> j & 1) sum += w2[j];
    }
    s2.push_back(sum);
  }
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  ll ans = 0;
  for (auto e : s1) {
    auto it1 = lower_bound(s2.begin(), s2.end(), x - e);
    auto it2 = upper_bound(s2.begin(), s2.end(), x - e);
    ans += it2 - it1;
  }
  cout << ans << endl;
  return 0;
}
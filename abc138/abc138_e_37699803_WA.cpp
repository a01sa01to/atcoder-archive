/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/37699803
 * Submitted at: 2023-01-03 00:25:39
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_e
 * Result: WA
 * Execution Time: 20 ms
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
  string s, t;
  cin >> s >> t;
  vector<vector<ll>> idx(26, vector<ll>());
  rep(i, s.size()) {
    idx[s[i] - 'a'].push_back(i);
  }
  Debug(idx);
  ll n = s.size();
  ll ans = 0;
  rep(i, t.size()) {
    ll c = t[i] - 'a';
    if (idx[c].size() == 0) {
      cout << -1 << endl;
      return 0;
    }
    auto it = upper_bound(idx[c].begin(), idx[c].end(), ans % n);
    if (it == idx[c].end()) {
      ans = (ans / n + 1) * n + idx[c][0];
    }
    else {
      ans = ans / n * n + *it;
    }
    Debug((char) (c + 'a'), ans);
  }
  cout << ans + 1 << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/37699850
 * Submitted at: 2023-01-03 00:28:04
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_e
 * Result: AC
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
  vector<vector<int>> idx(26, vector<int>());
  rep(i, s.size()) {
    idx[s[i] - 'a'].push_back(i);
  }
  Debug(idx);
  int n = s.size();
  ll ans = -1;
  rep(i, t.size()) {
    int c = t[i] - 'a';
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
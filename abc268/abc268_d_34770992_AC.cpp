/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc268/submissions/34770992
 * Submitted at: 2022-09-11 10:37:04
 * Problem URL: https://atcoder.jp/contests/abc268/tasks/abc268_d
 * Result: AC
 * Execution Time: 531 ms
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

int n, m;
void dfs(string x, int used, const vector<string>& s, const vector<string>& t) {
  if (used == (1 << n) - 1) {
    if (lower_bound(t.begin(), t.end(), x) == upper_bound(t.begin(), t.end(), x) && x.size() >= 3 && x.size() <= 16) {
      cout << x << endl;
      exit(0);
    }
    return;
  }
  rep(i, n) {
    if (used & (1 << i)) continue;
    string us = "_";
    for (int j = 1; x.size() + j + s[i].size() <= 16; j++) {
      string y = x + us + s[i];
      dfs(y, used | (1 << i), s, t);
      us += "_";
    }
  }
}

int main() {
  cin >> n >> m;
  vector<string> s(n), t(m);
  rep(i, n) cin >> s[i];
  rep(i, m) cin >> t[i];
  sort(t.begin(), t.end());

  rep(i, n) {
    dfs(s[i], 1 << i, s, t);
  }
  cout << -1 << endl;
  return 0;
}
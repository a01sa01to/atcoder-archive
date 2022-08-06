/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc165/submissions/33794259
 * Submitted at: 2022-08-06 14:44:24
 * Problem URL: https://atcoder.jp/contests/abc165/tasks/abc165_c
 * Result: AC
 * Execution Time: 30 ms
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

int sol(const int& n, const int& m, const int& q, const vector<tuple<int, int, int, int>>& v, const vector<int>& vec) {
  if (n == 0) {
    int ans = 0;
    for (auto [a, b, c, d] : v) {
      if (vec[b] - vec[a] == c) ans += d;
    }
    return ans;
  }
  int ans = 0;
  for (int i = (vec.empty() ? 1 : vec.back()); i <= m; i++) {
    vector<int> next_vec = vec;
    next_vec.push_back(i);
    ans = max(ans, sol(n - 1, m, q, v, next_vec));
  }
  return ans;
}

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<tuple<int, int, int, int>> v(q);
  rep(i, q) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    v[i] = { --a, --b, c, d };
  }
  cout << sol(n, m, q, v, {}) << endl;
  return 0;
}
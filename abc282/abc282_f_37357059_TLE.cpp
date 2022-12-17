/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37357059
 * Submitted at: 2022-12-17 22:38:01
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_f
 * Result: TLE
 * Execution Time: 4410 ms
 */

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("unroll-loops")

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

void dfs(int l, int r, set<pair<int, int>>& s) {
  if (r - l <= 1) {
    s.insert({ l, l });
    return;
  }
  int m = (l + r) / 2;
  for (int i = l; i < m; i++) s.insert({ i, m });
  for (int i = m + 1; i < r; i++) s.insert({ m, i });
  dfs(l, m, s);
  s.insert({ m, m });
  dfs(m + 1, r, s);
}

int main() {
  int n;
  cin >> n;
  set<tuple<int, int, int>> s;
  {
    set<pair<int, int>> t;
    dfs(0, n, t);
    cout << t.size() << endl;
    int idx = 0;
    for (auto [a, b] : t) {
      cout << a + 1 << " " << b + 1 << endl;
      s.insert({ a, b, idx++ });
    }
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    Debug(l, r);
    auto itr = s.lower_bound({ l, r + 1, -1 });
    if (itr == s.begin()) {
      // assertion
      cout << 1 << " " << 1 << endl;
      continue;
    }
    Debug(*itr);
    itr--;
    auto [_, a, b] = *itr;
    Debug(_, a, b);
    auto itr2 = s.lower_bound({ a, r + 1, -1 });
    if (itr == s.begin()) {
      // assertion
      cout << 1 << " " << 1 << endl;
      continue;
    }
    Debug(*itr2);
    itr2--;
    auto [__, c, d] = *itr2;
    Debug(__, c, d);
    cout << b + 1 << " " << d + 1 << endl;
  }
  return 0;
}
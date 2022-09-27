/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc035/submissions/35202881
 * Submitted at: 2022-09-28 00:20:34
 * Problem URL: https://atcoder.jp/contests/arc035/tasks/arc035_b
 * Result: AC
 * Execution Time: 18 ms
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

using mint = modint1000000007;

int main() {
  vector<mint> fact(10001);
  fact[0] = 1;
  rep(i, 10000) fact[i + 1] = fact[i] * (i + 1);

  int n;
  cin >> n;
  vector<int> t(n);
  map<int, int> cnt;
  rep(i, n) {
    cin >> t[i];
    cnt[t[i]]++;
  }
  sort(t.begin(), t.end());
  int now = 0;
  ll pena = 0;
  rep(i, n) {
    now += t[i];
    pena += now;
  }
  mint c = 1;
  for (auto [k, v] : cnt) c *= fact[v];
  cout << pena << endl
       << c.val() << endl;
  return 0;
}
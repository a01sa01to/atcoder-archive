/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/yahoo-procon2018-final-open/submissions/35803867
 * Submitted at: 2022-10-20 16:32:46
 * Problem URL: https://atcoder.jp/contests/yahoo-procon2018-final-open/tasks/yahoo_procon2018_final_a
 * Result: AC
 * Execution Time: 270 ms
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

inline vector<int> prime_factorize(int n) {
  vector<int> res;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) res.push_back(i);
    while (n % i == 0) n /= i;
  }
  if (n != 1) res.push_back(n);
  return res;
}

int main() {
  constexpr int maxim = 1e5;
  int n, m;
  cin >> n >> m;
  vector<int> cnt(maxim + 1, 0);
  rep(i, n) {
    int a;
    cin >> a;
    auto v = prime_factorize(a);
    rep(bit, 1 << v.size()) {
      if (bit == 0) continue;
      int x = 1;
      rep(j, v.size()) if (bit & (1 << j)) x *= v[j];
      ++cnt[x];
    }
  }
  for (int k = 1; k <= m; k++) {
    int t = 0;
    auto v = prime_factorize(k);
    rep(bit, 1 << v.size()) {
      if (bit == 0) continue;
      int res = 1;
      rep(i, v.size()) if (bit & (1 << i)) res *= v[i];
      t += (__builtin_popcount(bit) % 2 ? 1 : -1) * cnt[res];
    }
    Debug(k, t, v);
    cout << n - t << endl;
  }
  return 0;
}
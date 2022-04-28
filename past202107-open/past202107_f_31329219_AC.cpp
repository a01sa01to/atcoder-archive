/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202107-open/submissions/31329219
 * Submitted at: 2022-04-29 01:55:39
 * Problem URL: https://atcoder.jp/contests/past202107-open/tasks/past202107_f
 * Result: AC
 * Execution Time: 70 ms
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
  int n;
  cin >> n;
  const int INF = 1e5 * 24;
  vector<int> imos(INF + 1, 0);
  rep(i, n) {
    int d, s, t;
    cin >> d >> s >> t;
    imos[(d - 1) * 24 + s]++;
    imos[(d - 1) * 24 + t]--;
  }
  rep(i, INF + 1) imos[i] += imos[i - 1];
  Debug(imos);
  bool ans = false;
  rep(i, INF + 1) ans |= imos[i] > 1;
  puts(ans ? "Yes" : "No");
  return 0;
}
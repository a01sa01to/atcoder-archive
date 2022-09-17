/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/34957405
 * Submitted at: 2022-09-18 00:00:54
 * Problem URL: https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_c
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<ll> w_sum(n + 1, 0), b_sum(n + 1, 0);
  rep(i, n) {
    w_sum[i + 1] = w_sum[i] + (s[i] == '.');
    b_sum[i + 1] = b_sum[i] + (s[i] == '#');
  }
  const ll INF = 1e9;
  ll ans = INF;
  rep(i, n + 1) {
    ans = min(ans, b_sum[i] + (w_sum[n] - w_sum[i]));
  }
  if (ans == INF) ans = 0;
  cout << ans << endl;
  return 0;
}
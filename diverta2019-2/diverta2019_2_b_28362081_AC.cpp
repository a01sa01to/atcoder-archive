/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/diverta2019-2/submissions/28362081
 * Submitted at: 2022-01-07 18:53:44
 * Problem URL: https://atcoder.jp/contests/diverta2019-2/tasks/diverta2019_2_b
 * Result: AC
 * Execution Time: 6 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<P> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  map<P, int> cnt;
  rep(i, n) rep(j, n) {
    if (i == j) continue;
    ll dx = v[j].first - v[i].first;
    ll dy = v[j].second - v[i].second;
    ++cnt[P(dx, dy)];
  }
  int maxim = 0;
  for (auto p : cnt) maxim = max(maxim, p.second);
  cout << n - maxim << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33106400
 * Submitted at: 2022-07-09 22:03:27
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_f
 * Result: WA
 * Execution Time: 265 ms
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
  vector<int> di(n);
  rep(i, n) cin >> di[i];
  vector<tuple<int, int, int>> v;
  rep(i, n) {
    int u, _v, w;
    cin >> u >> _v >> w;
    --u, --_v;
    v.emplace_back(w, u, _v);
  }
  sort(v.rbegin(), v.rend());
  ll ans = 0;
  rep(i, n) {
    auto [w, u, _v] = v[i];
    if (di[u] != 0 && di[_v] != 0 && w > 0) {
      ans += w;
      di[u]--, di[_v]--;
    }
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc045/submissions/37755704
 * Submitted at: 2023-01-06 00:30:25
 * Problem URL: https://atcoder.jp/contests/arc045/tasks/arc045_b
 * Result: AC
 * Execution Time: 210 ms
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

int op(int a, int b) { return min(a, b); }
int e() { return 1e9; }

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> v(m);
  rep(i, m) cin >> v[i].first >> v[i].second;
  vector<int> sum(n + 1, 0);
  rep(i, m) {
    sum[v[i].first - 1]++;
    sum[v[i].second]--;
  }
  rep(i, n) sum[i + 1] += sum[i];
  Debug(sum);
  segtree<int, op, e> seg(sum);
  vector<int> ans(0);
  rep(i, m) {
    Debug(v[i]);
    Debug(seg.prod(v[i].first - 1, v[i].second));
    if (seg.prod(v[i].first - 1, v[i].second) >= 2) ans.push_back(i + 1);
  }
  cout << ans.size() << endl;
  for (auto x : ans) cout << x << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc160/submissions/33208284
 * Submitted at: 2022-07-14 00:00:41
 * Problem URL: https://atcoder.jp/contests/abc160/tasks/abc160_e
 * Result: AC
 * Execution Time: 120 ms
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

int main() {
  int x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;
  vector<int> p(a), q(b), r(c);
  rep(i, a) cin >> p[i];
  rep(i, b) cin >> q[i];
  rep(i, c) cin >> r[i];
  sort(p.rbegin(), p.rend()), sort(q.rbegin(), q.rend());
  priority_queue<int> pq;
  rep(i, x) pq.push(p[i]);
  rep(i, y) pq.push(q[i]);
  rep(i, c) pq.push(r[i]);

  ll ans = 0;
  rep(_, x + y) {
    ans += pq.top();
    pq.pop();
  }
  cout << ans << endl;
  return 0;
}
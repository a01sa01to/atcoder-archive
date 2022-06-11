/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32385623
 * Submitted at: 2022-06-11 21:22:56
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_b
 * Result: AC
 * Execution Time: 326 ms
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
  int n, k;
  cin >> n >> k;
  set<int> a;
  rep(i, k) {
    int x;
    cin >> x;
    a.insert(--x);
  }
  vector<pair<double, double>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;

  vector<pair<double, double>> has, nhas;
  rep(i, n) {
    if (a.count(i))
      has.push_back(v[i]);
    else
      nhas.push_back(v[i]);
  }
  Debug(has, nhas);

  double ok = 3e5, ng = 0;
  while (abs(ok - ng) > 1e-8) {
    double mid = (ok + ng) / 2;
    queue<pair<int, int>> q;
    rep(i, nhas.size()) q.push(nhas[i]);
    Debug(q.size());
    rep(i, has.size()) {
      auto [nx, ny] = has[i];
      rep(_, n) {
        if (q.empty()) break;
        auto [px, py] = q.front();
        q.pop();
        if (((nx - px) * (nx - px) + (ny - py) * (ny - py)) > mid * mid) {
          q.push({ px, py });
        }
      }
    }
    Debug(q.size());
    Debug(q, mid);
    (q.empty() ? ok : ng) = mid;
  }
  cout << fixed << setprecision(8) << ok << endl;
  return 0;
}
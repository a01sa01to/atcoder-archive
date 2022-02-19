/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29479445
 * Submitted at: 2022-02-20 00:02:01
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_f
 * Result: WA
 * Execution Time: 171 ms
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
  ll n, m;
  cin >> n >> m;
  vector<ll> d(n);
  rep(i, n) cin >> d[i];
  vector Graph(n, vector<ll>(0));
  rep(i, m) {
    ll a, b;
    cin >> a >> b;
    Graph[a - 1].push_back(b - 1);
    Graph[b - 1].push_back(a - 1);
  }
  ll sum = accumulate(d.begin(), d.end(), 0LL);
  if (sum != 2 * (n - 1)) {
    cout << -1 << endl;
    return 0;
  }
  set<pair<ll, ll>> s, t;
  rep(i, n) {
    if (d[i] - Graph[i].size() > 1) s.insert({ d[i] - Graph[i].size(), i });
    if (d[i] - Graph[i].size() == 1) t.insert({ 1, i });
  }
  vector<pair<ll, ll>> ans;
  while (!s.empty() && !t.empty()) {
    auto u = *s.rbegin();
    auto v = *t.begin();
    ans.push_back({ u.second + 1, v.second + 1 });
    s.erase(u);
    t.erase(v);
    if (u.first > 2) s.insert({ u.first - 1, u.second });
    if (u.first > 1) t.insert({ u.first - 1, u.second });
  }
  if (s.empty() && t.size() == 2) {
    auto u = *t.begin();
    auto v = *next(t.begin());
    ans.push_back({ u.second + 1, v.second + 1 });
    t.erase(u);
    t.erase(v);
  }
  if (s.empty() && t.empty() && ans.size() == n - m - 1) {
    for (auto [u, v] : ans) cout << u << " " << v << endl;
  }
  else {
    cout << -1 << endl;
  }
  return 0;
}
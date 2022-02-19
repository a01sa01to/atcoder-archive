/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29467016
 * Submitted at: 2022-02-19 22:20:33
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_f
 * Result: WA
 * Execution Time: 428 ms
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
  set<pair<ll, ll>> st;
  rep(i, n) if (d[i] - Graph[i].size() > 0) st.insert({ d[i] - Graph[i].size(), i });
  vector<pair<ll, ll>> ans;
  while (st.size() > 1) {
    auto u = *st.begin();
    auto v = *st.rbegin();
    ans.push_back({ u.second + 1, v.second + 1 });
    st.erase(u);
    st.erase(v);
    if (u.first > 1) st.insert({ u.first - 1, u.second });
    if (v.first > 1) st.insert({ v.first - 1, v.second });
  }
  if (ans.size() != n - m - 1) {
    cout << -1 << endl;
  }
  else {
    for (auto [u, v] : ans) cout << u << " " << v << endl;
  }
  return 0;
}
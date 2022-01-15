/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/28555767
 * Submitted at: 2022-01-15 21:57:22
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_e
 * Result: WA
 * Execution Time: 870 ms
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
typedef tuple<int, int, int> t3;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<t3> e;
  map<t3, int> mp;
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    e.push_back(t3(--a, --b, c));
  }
  rep(i, q) {
    int a, b, c;
    cin >> a >> b >> c;
    e.push_back(t3(--a, --b, c));
    mp[t3(a, b, c)] = i + 1;
  }
  dsu d(n);
  vector<t3> used;
  sort(e.begin(), e.end(), [](t3& a, t3& b) {
    return get<2>(a) < get<2>(b);
  });
  rep(i, e.size()) {
    auto [a, b, c] = e[i];
    if (d.same(a, b)) continue;
    d.merge(a, b);
    used.push_back(e[i]);
  }
  vector<bool> queryUse(q, false);
  rep(i, used.size()) {
    if (mp[used[i]]) {
      queryUse[mp[used[i]] - 1] = true;
    }
  }
  rep(i, q) {
    cout << (queryUse[i] ? "Yes" : "No") << endl;
  }
  return 0;
}
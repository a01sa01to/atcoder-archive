/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/28932242
 * Submitted at: 2022-01-30 21:41:01
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_e
 * Result: WA
 * Execution Time: 454 ms
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
  int n, m;
  cin >> n >> m;
  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  vector Graph(n, set<int>());
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].insert(b - 1);
    Graph[b - 1].insert(a - 1);
  }
  ll ans = 0;
  queue<pair<ll, ll>> que;
  vector<bool> seen(n, false);
  que.push({ 0, 0 });
  seen[0] = true;
  while (!que.empty()) {
    auto [i, c] = que.front();
    que.pop();
    ans = max(ans, c);
    for (auto j : Graph[i]) {
      if (!seen[j]) {
        if (h[j] < h[i]) {
          que.push({ j, c + (h[i] - h[j]) });
          seen[j] = true;
        }
        else {
          que.push({ j, c - 2 * (h[j] - h[i]) });
          seen[j] = true;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
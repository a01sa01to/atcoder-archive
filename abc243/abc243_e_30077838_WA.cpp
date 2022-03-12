/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/30077838
 * Submitted at: 2022-03-12 22:38:40
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_e
 * Result: WA
 * Execution Time: 63 ms
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
  vector Query(m, tuple<int, int, int>(0, 0, 0));
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    Query[i] = { a, b, c };
  }
  sort(Query.begin(), Query.end(), [](auto& a, auto& b) {
    return get<2>(a) < get<2>(b);
  });

  vector dist(n, vector<ll>(n, 1e18));
  int ans = 0;
  // puts("-----");
  for (auto [a, b, c] : Query) {
    if (dist[a][b] < c) {
      ++ans;
      // printf("[DEBUG] %d %d %d\n", a, b, c);
      continue;
    }
    dist[a][b] = dist[b][a] = c;
    bool flag = true;
    rep(k, n) {
      if (dist[a][b] + dist[b][k] < dist[a][k]) {
        dist[a][k] = dist[k][a] = dist[a][b] + dist[b][k];
        flag = false;
      }
      if (dist[b][a] + dist[a][k] < dist[b][k]) {
        dist[b][k] = dist[k][b] = dist[b][a] + dist[a][k];
        flag = false;
      }
    }
    if (flag) {
      ++ans;
      // printf("[DEBUG] %d %d %d\n", a, b, c);
    }
  }

  cout << ans << endl;
  return 0;
}
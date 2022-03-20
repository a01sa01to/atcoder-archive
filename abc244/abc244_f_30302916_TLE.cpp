/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc244/submissions/30302916
 * Submitted at: 2022-03-20 22:25:35
 * Problem URL: https://atcoder.jp/contests/abc244/tasks/abc244_f
 * Result: TLE
 * Execution Time: 4418 ms
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
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  int ans = 0;
  rep(bit, 1 << n) {
    if (bit == 0) continue;
    int minim = 1e9;
    rep(i, n) {
      queue<tuple<int, int, int>> q;
      int now = 0;
      q.push({ i, 1, 1 << i });
      vector<bool> visited(1 << n, false);
      while (!q.empty()) {
        auto [v, d, s] = q.front();
        q.pop();
        visited[s] = true;
        if (s == bit) {
          minim = min(minim, d);
          break;
        }
        for (auto next_v : Graph[v]) {
          if (visited[s ^ (1 << next_v)]) continue;
          q.push({ next_v, d + 1, s ^ (1 << next_v) });
        }
      }
    }
    ans += minim;
  }
  cout << ans << endl;
  return 0;
}
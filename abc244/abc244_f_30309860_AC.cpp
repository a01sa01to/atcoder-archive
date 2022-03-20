/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc244/submissions/30309860
 * Submitted at: 2022-03-20 23:55:37
 * Problem URL: https://atcoder.jp/contests/abc244/tasks/abc244_f
 * Result: AC
 * Execution Time: 188 ms
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

  // state[i][j] = bitがiのとき、jを最後に追加するときの最小値
  const int INF = 1e9;
  vector state(1 << n, vector<int>(n, INF));
  queue<pair<int, int>> q;
  rep(i, n) {
    state[1 << i][i] = 1;
    q.push({ 1 << i, i });
  }

  while (!q.empty()) {
    auto [b, v] = q.front();
    q.pop();
    for (int next_v : Graph[v]) {
      int nxt = b ^ (1 << next_v);
      if (state[nxt][next_v] < INF) continue;
      state[nxt][next_v] = state[b][v] + 1;
      q.push({ nxt, next_v });
    }
  }

  int ans = 0;
  rep(bit, 1 << n) {
    if (bit == 0) continue;
    int minim = INF;
    rep(i, n) minim = min(minim, state[bit][i]);
    ans += minim;
  }
  cout << ans << endl;
  return 0;
}
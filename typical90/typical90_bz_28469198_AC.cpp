/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28469198
 * Submitted at: 2022-01-12 00:22:19
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bz
 * Result: AC
 * Execution Time: 67 ms
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
  rep(i, n) {
    int cnt = 0;
    for (auto j : Graph[i]) {
      if (j < i) ++cnt;
    }
    if (cnt == 1) ++ans;
  }
  cout << ans << endl;
  return 0;
}
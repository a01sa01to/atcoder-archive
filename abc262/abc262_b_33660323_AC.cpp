/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/33660323
 * Submitted at: 2022-07-31 21:03:19
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_b
 * Result: AC
 * Execution Time: 8 ms
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
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<bool>(n, false));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph[a][b] = true;
    Graph[b][a] = true;
  }
  int ans = 0;
  for (int a = 0; a < n; a++) {
    for (int b = a + 1; b < n; b++) {
      for (int c = b + 1; c < n; c++) {
        if (Graph[a][b] && Graph[b][c] && Graph[c][a]) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
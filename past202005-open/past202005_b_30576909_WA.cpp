/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202005-open/submissions/30576909
 * Submitted at: 2022-03-31 00:48:41
 * Problem URL: https://atcoder.jp/contests/past202005-open/tasks/past202005_b
 * Result: WA
 * Execution Time: 190 ms
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
  int n, m, q;
  cin >> n >> m >> q;
  vector<int> score(m, 0);
  vector<ll> solved(n, 0);
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      --x;
      int ans = 0;
      rep(i, m) {
        if (solved[x] & (1LL << i)) ans += n - score[i];
      }
      cout << ans << endl;
    }
    else {
      int x, y;
      cin >> x >> y;
      --x, --y;
      solved[x] |= (1 << y);
      ++score[y];
    }
  }
  return 0;
}
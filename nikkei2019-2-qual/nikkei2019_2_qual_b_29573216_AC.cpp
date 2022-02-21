/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nikkei2019-2-qual/submissions/29573216
 * Submitted at: 2022-02-22 00:24:11
 * Problem URL: https://atcoder.jp/contests/nikkei2019-2-qual/tasks/nikkei2019_2_qual_b
 * Result: AC
 * Execution Time: 32 ms
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
typedef modint998244353 mint;

int main() {
  int n;
  cin >> n;
  vector<int> d(n), cnt(n);
  rep(i, n) {
    cin >> d[i];
    ++cnt[d[i]];
  }
  mint ans = (d[0] == 0);
  rep(i, n) {
    if (i == 0) continue;
    if (d[i] == 0 && i != 0) ans = 0;
    ans *= cnt[d[i] - 1];
  }
  cout << ans.val() << endl;
  return 0;
}
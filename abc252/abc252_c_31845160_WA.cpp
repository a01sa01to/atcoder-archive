/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31845160
 * Submitted at: 2022-05-21 21:10:50
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_c
 * Result: WA
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int ans = 1e9;
  rep(k, 10) {
    int t = 0;
    vector<int> cnt(10, 0), idx(n, 0);
    rep(i, n) {
      rep(j, 10) {
        if (s[i][j] == k + '0') {
          cnt[j]++;
          idx[i] = j;
        }
      }
    }
    auto mx = max_element(cnt.begin(), cnt.end());
    t += (mx - cnt.begin()) + (*mx - 1) * 10;
    if (*mx == 1) {
      t = *max_element(idx.begin(), idx.end());
    }
    ans = min(ans, t);
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/29671019
 * Submitted at: 2022-02-26 21:09:51
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_c
 * Result: AC
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
  int n;
  cin >> n;
  vector s(n, vector<char>(n));
  rep(i, n) rep(j, n) cin >> s[i][j];
  // たて
  rep(j, n) rep(i, n - 5) {
    int cnt = 0;
    rep(k, 6) cnt += s[i + k][j] == '#';
    if (cnt >= 4) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  // よこ
  rep(i, n) rep(j, n - 5) {
    int cnt = 0;
    rep(k, 6) cnt += s[i][j + k] == '#';
    if (cnt >= 4) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  // ななめ
  rep(i, n - 5) rep(j, n - 5) {
    int cnt = 0;
    rep(k, 6) cnt += s[i + k][j + k] == '#';
    if (cnt >= 4) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  // ななめ
  rep(i, n - 5) rep(j, n - 5) {
    int cnt = 0;
    rep(k, 6) cnt += s[n - (i + k) - 1][j + k] == '#';
    if (cnt >= 4) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
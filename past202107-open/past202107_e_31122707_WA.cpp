/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202107-open/submissions/31122707
 * Submitted at: 2022-04-21 01:24:36
 * Problem URL: https://atcoder.jp/contests/past202107-open/tasks/past202107_e
 * Result: WA
 * Execution Time: 13 ms
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
  ll n;
  cin >> n;
  int ans = 30;
  while (ans > 0) {
    if (n % 3 == 1) {
      cout << ans << endl;
      return 0;
    }
    else if (n % 3 == 0) {
      n /= 3;
      --ans;
    }
    else {
      break;
    }
  }
  cout << -1 << endl;
  return 0;
}
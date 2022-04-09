/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc138/submissions/30823160
 * Submitted at: 2022-04-09 22:39:47
 * Problem URL: https://atcoder.jp/contests/arc138/tasks/arc138_b
 * Result: WA
 * Execution Time: 38 ms
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
  vector<bool> v(n);
  rep(i, n) {
    int x;
    cin >> x;
    v[i] = x == 1;
  }
  {
    bool chk = false;
    rep(i, n) chk |= v[i];
    if (!chk) {
      // 全部0
      puts("Yes");
      return 0;
    }
    else if (v[0]) {
      // 先頭が1にはなりえない
      puts("No");
      return 0;
    }
    else if (chk && !v[0] && !v[1]) {
      // どこかに1があるとき、先頭2つが0にはなりえない
      puts("No");
      return 0;
    }
  }
  puts("Yes");

  return 0;
}
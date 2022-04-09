/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc138/submissions/30818549
 * Submitted at: 2022-04-09 22:07:52
 * Problem URL: https://atcoder.jp/contests/arc138/tasks/arc138_b
 * Result: WA
 * Execution Time: 33 ms
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
  bool a = false, b = false, c = false;
  rep(i, n) {
    if (c && v[i]) {  //連続の後に0で1はむり
      puts("No");
      return 0;
    }
    else if (b && !c && !v[i])  //連続の後に0
      c = true;
    else if (a && v[i])  //連続で1
      b = true;
    else if (!b && a && !v[i])
      a = false;
    else if (!b && !a && v[i])
      a = true;
  }
  puts("Yes");

  return 0;
}
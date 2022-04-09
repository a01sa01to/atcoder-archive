/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc138/submissions/30820895
 * Submitted at: 2022-04-09 22:23:43
 * Problem URL: https://atcoder.jp/contests/arc138/tasks/arc138_b
 * Result: WA
 * Execution Time: 36 ms
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
  }
  int now = 0, c = 0;
  rep(i, n) {
    if (v[i])
      now++;
    else
      now--;
    if (now == 1) {
      // 連続して1
      c = i - 2;  // 操作Aの回数
      break;
    }
    if (now == -2) {
      // 前半で連続して0になっている
      puts("No");
      return 0;
    }
  }
  Debug(c);
  now = (v.back() ? -1 : 0);
  bool f = false, g = false;
  for (int i = n - 1; i >= 0; --i) {
    if (v[i])
      now++;
    else
      now--;
    if (now == 0) {
      if (!f)
        f = true;
      else
        g = true;
    }
    if (now == 1) {
      Debug(n - i - 1);
      // 連続して1
      puts((!g || n - i - 1 <= c) ? "Yes" : "No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
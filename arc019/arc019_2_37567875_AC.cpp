/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc019/submissions/37567875
 * Submitted at: 2022-12-27 00:19:11
 * Problem URL: https://atcoder.jp/contests/arc019/tasks/arc019_2
 * Result: AC
 * Execution Time: 20 ms
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
  string s;
  cin >> s;
  int cnt = 0;
  rep(i, s.size()) {
    if (s[i] != s[s.size() - i - 1]) cnt++;
  }
  cnt /= 2;
  ll ans = 0;
  rep(i, s.size()) {
    if (cnt == 0) {
      if (s.size() % 2 == 1 && i == s.size() / 2) {
        // 真ん中は変えても意味ない
      }
      else {
        // 回文なのでそれ以外の文字にする必要がある
        ans += 25;
      }
    }
    else if (cnt == 1) {
      if (s[i] != s[s.size() - i - 1]) {
        // 回文にならない文字に変える必要がある
        ans += 24;
      }
      else {
        // それ以外ならなんでもいい
        ans += 25;
      }
    }
    else {
      // どの文字にしても回文にならない
      ans += 25;
    }
  }
  cout << ans << endl;
  return 0;
}
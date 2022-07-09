/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33079760
 * Submitted at: 2022-07-09 21:10:54
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_c
 * Result: WA
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  queue<pair<char, int>> s_l, t_l;
  {
    pair<char, int> tmp = { s[0], 0 };
    rep(i, s.size()) {
      if (s[i] == tmp.first) {
        tmp.second++;
      }
      else {
        s_l.push(tmp);
        tmp = { s[i], 1 };
      }
    }
    s_l.push(tmp);
  }
  {
    pair<char, int> tmp = { t[0], 0 };
    rep(i, t.size()) {
      if (t[i] == tmp.first) {
        tmp.second++;
      }
      else {
        t_l.push(tmp);
        tmp = { t[i], 1 };
      }
    }
    t_l.push(tmp);
  }
  bool chk = true;
  if (s_l.size() != t_l.size()) {
    chk = false;
  }
  else {
    rep(i, s_l.size()) {
      if (s_l.front().first != t_l.front().first) {
        chk = false;
        break;
      }
      if (s_l.front().second == 1 && t_l.front().second > 1) {
        chk = false;
        break;
      }
      if (s_l.front().second > t_l.front().second) {
        chk = false;
        break;
      }
      s_l.pop();
      t_l.pop();
    }
  }
  puts(chk ? "Yes" : "No");
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33083954
 * Submitted at: 2022-07-09 21:17:39
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_c
 * Result: AC
 * Execution Time: 18 ms
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
  Debug(s_l, t_l);
  bool chk = true;
  if (s_l.size() != t_l.size()) {
    chk = false;
  }
  else {
    while (!s_l.empty()) {
      auto [sc, si] = s_l.front();
      auto [tc, ti] = t_l.front();
      s_l.pop(), t_l.pop();
      if (sc != tc) chk = false;
      if (si == 1 && ti > 1) chk = false;
      if (si > ti) chk = false;
    }
  }
  puts(chk ? "Yes" : "No");
  return 0;
}
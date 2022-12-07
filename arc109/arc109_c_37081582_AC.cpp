/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc109/submissions/37081582
 * Submitted at: 2022-12-08 00:03:29
 * Problem URL: https://atcoder.jp/contests/arc109/tasks/arc109_c
 * Result: AC
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

char winner(char a, char b) {
  if (a == 'R') {
    if (b == 'R') return 'R';
    if (b == 'S') return 'R';
    if (b == 'P') return 'P';
  }
  if (a == 'S') {
    if (b == 'R') return 'R';
    if (b == 'S') return 'S';
    if (b == 'P') return 'S';
  }
  if (a == 'P') {
    if (b == 'R') return 'P';
    if (b == 'S') return 'S';
    if (b == 'P') return 'P';
  }
}

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;
  rep(_, k) {
    string news = "";
    s = s + s;
    rep(i, n) {
      news.push_back(winner(s[i * 2], s[i * 2 + 1]));
    }
    s = news;
  }
  cout << s[0] << endl;
  return 0;
}
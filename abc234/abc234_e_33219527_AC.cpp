/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/33219527
 * Submitted at: 2022-07-14 19:03:14
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_e
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

int main() {
  ll x;
  cin >> x;
  if (x < 100) {
    cout << x << endl;
    return 0;
  }
  int sub = -9;
  while (true) {
    string t = to_string(x);
    bool chk = true;
    rep(i, t.size() - 1) {
      t[i + 1] = t[i] + sub;
      if (t[i + 1] < '0' || t[i + 1] > '9' || stoll(t) < x) {
        chk = false;
      }
    }
    Debug(t);
    if (chk) {
      cout << t << endl;
      return 0;
    }
    sub++;
    if (sub >= 10) {
      char s = t[0];
      s++;
      t.assign(t.size(), '0');
      t[0] = s;
      if (t[0] > '9') {
        t.assign(t.size(), '0');
        t.push_back('0');
        t[0] = '1';
      }
      x = stoll(t);
      sub = -9;
    }
  }
  return 0;
}
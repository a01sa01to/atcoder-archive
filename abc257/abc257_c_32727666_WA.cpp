/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32727666
 * Submitted at: 2022-06-25 21:35:48
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_c
 * Result: WA
 * Execution Time: 135 ms
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

int f(const vector<int> &w, const string &s, double x, bool sol = false) {
  int ret = 0;
  rep(i, w.size()) {
    if (w[i] < x && s[i] == '1' && !sol) ret++;
    if (w[i] >= x && s[i] == '0' && !sol) ret--;
    if (w[i] < x && s[i] == '0' && sol) ret++;
    if (w[i] >= x && s[i] == '1' && sol) ret++;
  }
  return ret;
}

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> w(n);
  rep(i, n) cin >> w[i];

  int minus = 0, pls = 1e9;
  while (pls - minus > 1) {
    int mid = (pls + minus) / 2;
    Debug(mid, pls, minus, f(w, s, mid));
    if (f(w, s, mid) > 0)
      pls = mid;
    else
      minus = mid;
  }

  cout << f(w, s, pls, true) << endl;
  return 0;
}
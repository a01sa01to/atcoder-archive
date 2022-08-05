/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/33786846
 * Submitted at: 2022-08-06 00:07:48
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_e
 * Result: WA
 * Execution Time: 19 ms
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
  int n, k;
  cin >> n >> k;
  int t = (n - 1) * (n - 2) / 2;
  if (k > t) {
    cout << -1 << endl;
  }
  else {
    vector<pair<int, int>> v;
    rep(i, n - 1) {
      v.push_back({ i + 1, n });
    }
    rep(i, t - n) {
      v.push_back({ i + 1, i + 2 });
    }
    cout << v.size() << endl;
    for (auto [a, b] : v) {
      cout << a << " " << b << endl;
    }
  }
  return 0;
}
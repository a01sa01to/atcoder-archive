/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/33786947
 * Submitted at: 2022-08-06 00:14:20
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_e
 * Result: AC
 * Execution Time: 16 ms
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
    queue<pair<int, int>> rem;
    for (int x = 1; x < n; x++) {
      for (int y = x + 1; y < n; y++) {
        rem.push({ x, y });
      }
    }
    rep(_, t - k) {
      v.push_back(rem.front());
      rem.pop();
    }
    cout << v.size() << endl;
    for (auto [a, b] : v) {
      cout << a << " " << b << endl;
    }
  }
  return 0;
}
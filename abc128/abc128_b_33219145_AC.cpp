/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc128/submissions/33219145
 * Submitted at: 2022-07-14 18:37:56
 * Problem URL: https://atcoder.jp/contests/abc128/tasks/abc128_b
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
  int n;
  cin >> n;
  vector<tuple<string, int, int>> a(n);
  rep(i, n) {
    string s;
    int p;
    cin >> s >> p;
    a[i] = { s, -p, i + 1 };
  }
  sort(a.begin(), a.end());
  for (auto [x, y, z] : a) {
    cout << z << endl;
  }
  return 0;
}
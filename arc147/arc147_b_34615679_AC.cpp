/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc147/submissions/34615679
 * Submitted at: 2022-09-04 22:18:31
 * Problem URL: https://atcoder.jp/contests/arc147/tasks/arc147_b
 * Result: AC
 * Execution Time: 74 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<bool> parityCheck(n, true);
  rep(i, n) {
    if (a[i] % 2 == i % 2) parityCheck[i] = false;
  }
  Debug(parityCheck);
  vector<pair<char, int>> ans;
  rep(_, n) rep(i, n - 2) {
    if (parityCheck[i] && !parityCheck[i + 2]) {
      ans.push_back({ 'B', i + 1 });
      swap(parityCheck[i], parityCheck[i + 2]);
      swap(a[i], a[i + 2]);
    }
  }
  Debug(parityCheck);
  Debug(a);
  rep(i, n - 1) {
    if (!parityCheck[i] && !parityCheck[i + 1]) {
      ans.push_back({ 'A', i + 1 });
      parityCheck[i] = parityCheck[i + 1] = true;
      swap(a[i], a[i + 1]);
    }
  }
  Debug(ans);
  Debug(a);
  rep(i, n) assert(parityCheck[i]);
  for (int x = 1; x <= n; x++) {
    for (int i = n - 1; i >= x; i--) {
      if (a[i] == x) {
        ans.push_back({ 'B', i - 1 });
        swap(a[i], a[i - 2]);
      }
    }
  }
  cout << ans.size() << endl;
  for (auto [c, i] : ans) cout << c << ' ' << i << endl;
  return 0;
}
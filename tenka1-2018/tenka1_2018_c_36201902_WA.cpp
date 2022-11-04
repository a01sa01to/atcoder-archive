/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2018/submissions/36201902
 * Submitted at: 2022-11-05 00:00:03
 * Problem URL: https://atcoder.jp/contests/tenka1-2018/tasks/tenka1_2018_c
 * Result: WA
 * Execution Time: 50 ms
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
  deque<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  vector<ll> b(0), c(0);
  while (!a.empty()) {
    b.push_back(a.back());
    a.pop_back();
    if (!a.empty()) {
      b.push_back(a.front());
      a.pop_front();
    }
  }
  c.push_back(b.back());
  rep(i, n - 1) c.push_back(b[i]);
  ll ans1 = 0, ans2 = 0;
  rep(i, n - 1) ans1 += abs(b[i] - b[i + 1]);
  rep(i, n - 1) ans2 += abs(c[i] - c[i + 1]);
  cout << max(ans1, ans2) << endl;
  return 0;
}
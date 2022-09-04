/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc147/submissions/34613645
 * Submitted at: 2022-09-04 22:02:02
 * Problem URL: https://atcoder.jp/contests/arc147/tasks/arc147_a
 * Result: AC
 * Execution Time: 91 ms
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
  sort(a.begin(), a.end());
  deque<int> q(a.begin(), a.end());
  ll ans = 0;
  while (q.size() > 1) {
    int x = q.front();  // min
    int y = q.back();
    q.pop_back();  // max
    ans++;
    y %= x;
    if (y != 0) q.push_front(y);
  }
  cout << ans << endl;
  return 0;
}
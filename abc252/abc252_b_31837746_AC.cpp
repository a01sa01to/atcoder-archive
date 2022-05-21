/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31837746
 * Submitted at: 2022-05-21 21:03:04
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_b
 * Result: AC
 * Execution Time: 4 ms
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
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> a(n);
  set<int> b;
  rep(i, n) {
    cin >> a[i].first;
    a[i].second = i;
  }
  rep(i, k) {
    int x;
    cin >> x;
    b.insert(--x);
  }
  sort(a.rbegin(), a.rend());
  int maxim = a[0].first;
  bool ans = false;
  rep(i, n) {
    if (a[i].first == maxim) {
      if (b.count(a[i].second)) {
        ans = true;
        break;
      }
    }
  }
  puts(ans ? "Yes" : "No");
  return 0;
}
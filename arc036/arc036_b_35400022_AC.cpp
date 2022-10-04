/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc036/submissions/35400022
 * Submitted at: 2022-10-05 00:13:51
 * Problem URL: https://atcoder.jp/contests/arc036/tasks/arc036_b
 * Result: AC
 * Execution Time: 89 ms
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
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  vector<int> high(0);
  rep(i, n) {
    if (i > 0 && h[i] > h[i - 1] && i < n - 1 && h[i] > h[i + 1]) {
      high.push_back(i);
    }
    else if (i == n - 1 && h[i] > h[i - 1]) {
      high.push_back(i);
    }
    else if (i == 0 && h[i] > h[i + 1]) {
      high.push_back(i);
    }
  }

  int ans = 0;
  rep(i, high.size()) {
    int l = high[i];
    int r = high[i];
    while (l > 0 && h[l - 1] < h[l]) l--;
    while (r < n - 1 && h[r + 1] < h[r]) r++;
    ans = max(ans, r - l + 1);
  }

  cout << ans << endl;
  return 0;
}
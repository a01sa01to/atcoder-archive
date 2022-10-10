/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35574697
 * Submitted at: 2022-10-11 00:00:05
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_c
 * Result: AC
 * Execution Time: 77 ms
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
  vector<int> odd, even;
  rep(i, n) {
    int x;
    cin >> x;
    (x % 2 == 0 ? even : odd).push_back(x);
  }
  sort(odd.rbegin(), odd.rend());
  sort(even.rbegin(), even.rend());

  int ans = -1;
  if (odd.size() >= 2) ans = max(ans, odd[0] + odd[1]);
  if (even.size() >= 2) ans = max(ans, even[0] + even[1]);

  cout << ans << endl;
  return 0;
}
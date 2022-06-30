/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc112/submissions/32855202
 * Submitted at: 2022-07-01 00:29:31
 * Problem URL: https://atcoder.jp/contests/abc112/tasks/abc112_d
 * Result: AC
 * Execution Time: 13 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> div(0);
  for (int x = 1; x * x <= m; x++) {
    if (m % x == 0) {
      div.push_back(x);
      if (x * x != m) div.push_back(m / x);
    }
  }
  sort(div.begin(), div.end());
  Debug(div);
  cout << *(upper_bound(div.begin(), div.end(), m / n) - 1) << endl;
  return 0;
}
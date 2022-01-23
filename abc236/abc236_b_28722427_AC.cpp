/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/28722427
 * Submitted at: 2022-01-23 21:03:00
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_b
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> cnt(n, 0);
  rep(i, 4 * n - 1) {
    int a;
    cin >> a;
    ++cnt[a - 1];
  }
  rep(i, n) if (cnt[i] == 3) cout << i + 1 << endl;
  return 0;
}
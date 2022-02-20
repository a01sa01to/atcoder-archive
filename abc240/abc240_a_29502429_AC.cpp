/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/29502429
 * Submitted at: 2022-02-20 21:00:47
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_a
 * Result: AC
 * Execution Time: 6 ms
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
  int a, b;
  cin >> a >> b;
  if (a == 1 && b == 10) cout << "Yes" << endl;
  else
    cout << (a + 1 == b ? "Yes" : "No") << endl;
  return 0;
}
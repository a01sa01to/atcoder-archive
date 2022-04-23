/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31176779
 * Submitted at: 2022-04-23 21:07:37
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_a
 * Result: AC
 * Execution Time: 11 ms
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
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;
  int ta = 0, ao = 0;
  ta = x / (a + c) * (a * b) + min(x % (a + c), a) * b;
  ao = x / (d + f) * (d * e) + min(x % (d + f), d) * e;
  // cout << ta << " " << ao << endl;

  if (ta == ao)
    cout << "Draw" << endl;
  else
    cout << (ta > ao ? "Takahashi" : "Aoki") << endl;
  return 0;
}
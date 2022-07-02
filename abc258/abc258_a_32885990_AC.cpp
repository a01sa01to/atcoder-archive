/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32885990
 * Submitted at: 2022-07-02 21:01:05
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_a
 * Result: AC
 * Execution Time: 17 ms
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
  ll n;
  cin >> n;
  cout << (21 + n / 60) << ":" << (n % 60 < 10 ? "0" : "") << n % 60 << endl;
  return 0;
}
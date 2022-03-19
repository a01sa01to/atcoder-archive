/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc137/submissions/30238438
 * Submitted at: 2022-03-19 21:55:09
 * Problem URL: https://atcoder.jp/contests/arc137/tasks/arc137_c
 * Result: WA
 * Execution Time: 92 ms
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
  vector<int> a(n + 1, -1);
  rep(i, n) cin >> a[i + 1];
  vector<int> d(n);
  rep(i, n) d[i] = a[i + 1] - a[i] - 1;
  if (accumulate(d.begin(), d.end(), 0LL) % 2 == 1) {
    puts("Alice");
  }
  else {
    puts("Bob");
  }
  return 0;
}
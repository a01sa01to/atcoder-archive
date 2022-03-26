/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30426479
 * Submitted at: 2022-03-26 21:01:00
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_a
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
  pair<int, int> t, a;
  cin >> t.first >> t.second >> a.first >> a.second;
  puts(t <= a ? "Takahashi" : "Aoki");
  return 0;
}
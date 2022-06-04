/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/32217242
 * Submitted at: 2022-06-04 21:19:51
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_c
 * Result: TLE
 * Execution Time: 2205 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(i, n - k) {
    vector<int> t(0);
    for (int j = i; j < n; j += k) t.push_back(a[j]);
    sort(t.begin(), t.end());
    int idx = 0;
    for (int j = i; j < n; j += k) a[j] = t[idx++];
  }
  bool chk = true;
  rep(i, n - 1) {
    if (a[i] > a[i + 1]) chk = false;
  }
  puts(chk ? "Yes" : "No");
  return 0;
}
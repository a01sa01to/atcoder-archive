/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc268/submissions/34770708
 * Submitted at: 2022-09-11 10:21:14
 * Problem URL: https://atcoder.jp/contests/abc268/tasks/abc268_c
 * Result: AC
 * Execution Time: 58 ms
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

inline int mod(int a, int m) {
  return (a % m + m) % m;
}

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  vector<int> dist(n, 0);
  rep(i, n) {
    int t = p[i] - i;
    dist[mod(t, n)]++;
    dist[mod(t - 1, n)]++;
    dist[mod(t + 1, n)]++;
  }
  cout << *max_element(dist.begin(), dist.end()) << endl;
  return 0;
}
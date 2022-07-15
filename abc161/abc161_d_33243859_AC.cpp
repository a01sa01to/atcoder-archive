/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc161/submissions/33243859
 * Submitted at: 2022-07-16 00:19:35
 * Problem URL: https://atcoder.jp/contests/abc161/tasks/abc161_d
 * Result: AC
 * Execution Time: 9 ms
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
  int k;
  cin >> k;
  queue<ll> q;
  for (int i = 1; i < 10; i++) q.push(i);
  while (--k) {
    ll x = q.front();
    q.pop();
    int t = x % 10;
    if (t) q.push(10 * x + x % 10 - 1);
    q.push(10 * x + x % 10);
    if (t != 9) q.push(10 * x + x % 10 + 1);
    Debug(x, q);
  }
  cout << q.front() << endl;
  return 0;
}
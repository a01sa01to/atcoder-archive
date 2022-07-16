/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc144/submissions/33271718
 * Submitted at: 2022-07-16 22:37:13
 * Problem URL: https://atcoder.jp/contests/arc144/tasks/arc144_b
 * Result: TLE
 * Execution Time: 2206 ms
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
  int n, a, b;
  cin >> n >> a >> b;
  multiset<ll> s;
  rep(i, n) {
    int x;
    cin >> x;
    s.insert(x);
  }
  while (true) {
    ll minim = *s.begin(), maxim = *s.rbegin();
    if (minim > maxim - b) {
      cout << minim << endl;
      break;
    }
    s.erase(s.begin());
    s.erase(--s.end());
    s.insert(minim + a), s.insert(maxim - b);
    Debug(s);
  }
  return 0;
}
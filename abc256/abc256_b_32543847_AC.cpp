/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32543847
 * Submitted at: 2022-06-18 21:07:23
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_b
 * Result: AC
 * Execution Time: 8 ms
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll p = 0;
  vector<ll> cnt(4, 0);
  rep(i, n) {
    cnt[0]++;
    switch (a[i]) {
      case 4:
        p += cnt[0] + cnt[1] + cnt[2] + cnt[3];
        cnt[0] = 0;
        cnt[1] = 0;
        cnt[2] = 0;
        cnt[3] = 0;
        break;
      case 3:
        p += cnt[1] + cnt[2] + cnt[3];
        cnt[1] = 0;
        cnt[2] = 0;
        cnt[3] = cnt[0];
        cnt[0] = 0;
        break;
      case 2:
        p += cnt[2] + cnt[3];
        cnt[2] = cnt[0];
        cnt[3] = cnt[1];
        cnt[0] = 0;
        cnt[1] = 0;
        break;
      case 1:
        p += cnt[3];
        cnt[3] = cnt[2];
        cnt[2] = cnt[1];
        cnt[1] = cnt[0];
        cnt[0] = 0;
        break;
    }
    Debug(cnt, p);
  }
  cout << p << endl;
  return 0;
}
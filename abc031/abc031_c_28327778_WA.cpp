/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc031/submissions/28327778
 * Submitted at: 2022-01-05 00:43:53
 * Problem URL: https://atcoder.jp/contests/abc031/tasks/abc031_c
 * Result: WA
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  // maxim: {高橋君、青木君}の最大値
  P maxim = { -5000000, -5000000 };
  rep(i, n) {
    // i番目を高橋君が選ぶとき
    P tmp = { 0, 0 };
    rep(j, n) {
      if (i == j) continue;
      // j番目を青木君が選ぶとき
      P tmp2 = { 0, 0 };
      if (j < i) {
        for (int k = j; k <= i; ++k) {
          if ((k - j) % 2 == 0) tmp2.first += a[k];
          else tmp2.second += a[k];
        }
      }
      else {
        for (int k = i; k <= j; ++k) {
          if ((k - i) % 2 == 0) tmp2.first += a[k];
          else tmp2.second += a[k];
        }
      }
      if (tmp2.second > tmp.second) tmp = tmp2;
    }
    if (tmp.first > maxim.first) maxim = tmp;
  }
  cout << maxim.first << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/29703865
 * Submitted at: 2022-02-26 22:25:59
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_d
 * Result: AC
 * Execution Time: 396 ms
 */

#include <bits/stdc++.h>
#include <exception>
#
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
  int q;
  cin >> q;
  multiset<ll> a;
  while (q--) {
    int mode;
    cin >> mode;
    if (mode == 1) {
      ll x;
      cin >> x;
      a.insert(x);
    }
    else if (mode == 2) {
      ll x, k;
      cin >> x >> k;
      auto itr = a.upper_bound(x);
      bool flag = true;
      rep(_, k) {
        if (itr == a.begin()) {
          flag = false;
          break;
        }
        itr--;
      }
      cout << (flag ? *itr : -1) << endl;
    }
    else {
      ll x, k;
      cin >> x >> k;
      bool flag = true;
      auto itr = a.lower_bound(x);
      rep(_, k - 1) {
        if (itr == a.end()) {
          flag = false;
          break;
        }
        itr++;
      }
      if (itr == a.end()) {
        flag = false;
      }
      cout << (flag ? *itr : -1) << endl;
    }
  }
  return 0;
}
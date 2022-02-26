/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/29675878
 * Submitted at: 2022-02-26 21:16:43
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_d
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
    switch (mode) {
      case 1:
        {
          ll x;
          cin >> x;
          a.insert(x);
        }
        break;
      case 2:
        {
          ll x, k;
          cin >> x >> k;
          auto itr = a.upper_bound(x);
          if (distance(a.begin(), itr) < k) {
            cout << -1 << endl;
          }
          else {
            rep(_, k) itr--;
            cout << *itr << endl;
          }
        }
        break;
      case 3:
        {
          ll x, k;
          cin >> x >> k;
          auto itr = a.lower_bound(x);
          if (distance(itr, a.end()) < k) {
            cout << -1 << endl;
          }
          else {
            rep(_, k - 1) itr++;
            cout << *itr << endl;
          }
        }
        break;
    }
  }
  return 0;
}
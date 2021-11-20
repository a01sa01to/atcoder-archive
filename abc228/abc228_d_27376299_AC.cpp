/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/27376299
 * Submitted at: 2021-11-20 21:39:55
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_d
 * Result: AC
 * Execution Time: 653 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  int q;
  cin >> q;
  int n = 1 << 20;
  vector<ll> a(n, -1);
  set<int> m1;
  rep(i, n) m1.insert(i);
  rep(i, q) {
    ll t, x;
    cin >> t >> x;
    if (t == 1) {
      if (m1.count(x % n)) {
        m1.erase(x % n);
        a[x % n] = x;
      }
      else {
        auto itr = m1.upper_bound(x % n);
        if (itr == m1.end()) itr = m1.begin();
        a[*itr] = x;
        m1.erase(itr);
      }
    }
    else {
      cout << a[x % n] << endl;
    }
  }
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/27806211
 * Submitted at: 2021-12-11 14:24:43
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_c
 * Result: WA
 * Execution Time: 79 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n, k;
  cin >> n >> k;
  set<P> s;
  ll idx = 1;
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
    s.insert(P(idx, x));
    idx += y;
  }
  auto itr = s.begin();
  ll prev = 0;
  while (itr != s.end()) {
    // cout << "[DEB] " << prev << " " << itr->first << endl;
    if (itr->first <= k) {
      prev = itr->second;
    }
    else {
      cout << prev << endl;
      return 0;
    }
    ++itr;
  }
  cout << prev << endl;
  return 0;
}
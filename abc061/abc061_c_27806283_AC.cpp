/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/27806283
 * Submitted at: 2021-12-11 14:28:00
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_c
 * Result: AC
 * Execution Time: 101 ms
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
  multiset<P> s;
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
    s.insert(P(x, y));
  }
  auto itr = s.begin();
  ll idx = 0;
  while (itr != s.end()) {
    if (idx + itr->second < k) {
      idx += itr->second;
      itr++;
    }
    else {
      cout << itr->first << endl;
      break;
    }
  }
  return 0;
}
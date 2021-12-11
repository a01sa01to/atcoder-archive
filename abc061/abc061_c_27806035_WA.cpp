/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/27806035
 * Submitted at: 2021-12-11 14:15:36
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_c
 * Result: WA
 * Execution Time: 60 ms
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
  vector<P> s;
  ll idx = 0;
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
    s.push_back(P(idx, x));
    idx += y;
  }
  ll ok = 0, ng = s.size();
  while (ng - ok > 1) {
    ll mid = (ok + ng) / 2;
    if (s[mid].first < k) ok = mid;
    else
      ng = mid;
  }
  cout << s[ok].second << endl;
  return 0;
}
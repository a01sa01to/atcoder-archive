/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc172/submissions/27856217
 * Submitted at: 2021-12-12 00:31:22
 * Problem URL: https://atcoder.jp/contests/abc172/tasks/abc172_c
 * Result: WA
 * Execution Time: 132 ms
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
  ll n, m, k;
  cin >> n >> m >> k;
  queue<ll> a, b;
  rep(i, n) {
    ll x;
    cin >> x;
    a.push(x);
  }
  rep(i, m) {
    ll x;
    cin >> x;
    b.push(x);
  }
  ll ans = 0, cnt = 0;
  while (true && (!a.empty() || !b.empty())) {
    if (b.empty()) {
      int aa = a.front();
      a.pop();
      if (aa + cnt <= k) {
        cnt += aa;
        ++ans;
      }
      else
        break;
    }
    else if (a.empty()) {
      int bb = b.front();
      b.pop();
      if (bb + cnt <= k) {
        cnt += bb;
        ++ans;
      }
      else
        break;
    }
    else {
      int aa = a.front(), bb = b.front();
      if (min(aa, bb) + cnt <= k) {
        ++ans;
        cnt += min(aa, bb);
        if (aa < bb) a.pop();
        else
          b.pop();
      }
      else
        break;
    }
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29379866
 * Submitted at: 2022-02-17 10:17:14
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bf
 * Result: AC
 * Execution Time: 19 ms
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
  ll n, k;
  cin >> n >> k;
  const ll mod = 1e5;
  vector<ll> cnt(mod, -1);
  ll x = n, c = 0;
  while (k > 0) {
    if (cnt[x] != -1) {
      k %= c - cnt[x];
      auto itr = find(cnt.begin(), cnt.end(), k + cnt[x]);
      x = distance(cnt.begin(), itr);
      break;
    }
    cnt[x] = c++;
    ll y = 0;
    rep(i, to_string(x).size()) {
      y += to_string(x)[i] - '0';
    }
    Debug(x);
    x = (x + y) % mod;
    --k;
  }
  cout << x % mod << endl;
  return 0;
}
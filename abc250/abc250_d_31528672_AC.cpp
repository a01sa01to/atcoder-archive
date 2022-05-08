/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31528672
 * Submitted at: 2022-05-08 21:29:24
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_d
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n;
  cin >> n;
  vector<ll> primes(0);
  {
    const int INF = 1e6;
    vector<bool> searched(INF, false);
    for (int i = 2; i <= INF; ++i) {
      if (!searched[i - 1]) {
        primes.push_back(i);
        for (int j = 2 * i; j <= INF; j += i) {
          searched[j - 1] = true;
        }
      }
    }
  }
  Debug(primes.size());
  int ans = 0;
  rep(i, primes.size()) {
    ll chk = primes[i] * primes[i] * primes[i];
    if (chk > n) break;
    auto itr = upper_bound(primes.begin(), primes.end(), n / chk);
    Debug(itr - primes.begin(), i);
    ans += min(int(itr - primes.begin()), i);
  }
  cout << ans << endl;
  return 0;
}
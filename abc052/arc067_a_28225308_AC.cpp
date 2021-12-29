/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc052/submissions/28225308
 * Submitted at: 2021-12-30 00:50:25
 * Problem URL: https://atcoder.jp/contests/abc052/tasks/arc067_a
 * Result: AC
 * Execution Time: 10 ms
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

map<int, int> cnt;

void prime_factorize(int x) {
  for (int i = 2; i * i <= x; ++i) {
    while (x % i == 0) {
      ++cnt[i];
      x /= i;
    }
  }
  if (x > 1) ++cnt[x];
}

int main() {
  int n;
  cin >> n;
  for (int i = 2; i <= n; ++i) prime_factorize(i);
  ll ans = 1;
  for (auto p : cnt) (ans *= (p.second + 1)) %= 1000000007;
  cout << ans << endl;
  return 0;
}
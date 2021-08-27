/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc019/submissions/25361797
 * Submitted at: 2021-08-27 17:15:57
 * Problem URL: https://atcoder.jp/contests/agc019/tasks/agc019_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll q, h, s, d, n;
  cin >> q >> h >> s >> d >> n;
  ll ans = 0;
  if (n != 1) {
    ans += min({ q * 8, h * 4, s * 2, d }) * (n / 2);
  }
  ans += min({ q * 4, h * 2, s }) * (n % 2);
  cout << ans << endl;
  return 0;
}
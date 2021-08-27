/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc087/submissions/25361892
 * Submitted at: 2021-08-27 17:22:00
 * Problem URL: https://atcoder.jp/contests/abc087/tasks/arc090_a
 * Result: AC
 * Execution Time: 5 ms
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
  int n;
  cin >> n;
  ll1d sum1(n + 1), sum2(n + 1);
  rep(i, n) {
    int a;
    cin >> a;
    sum1[i + 1] = sum1[i] + a;
  }
  rep(i, n) {
    int a;
    cin >> a;
    sum2[i + 1] = sum2[i] + a;
  }
  ll ans = 0;
  rep(i, n) {
    // ずっと右にいってiマス目で下に行く
    ans = max(ans, sum1[i + 1] + sum2[n] - sum2[i]);
  }
  cout << ans << endl;
  return 0;
}
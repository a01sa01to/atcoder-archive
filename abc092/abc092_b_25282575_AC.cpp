/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc092/submissions/25282575
 * Submitted at: 2021-08-23 00:03:47
 * Problem URL: https://atcoder.jp/contests/abc092/tasks/abc092_b
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

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

// 初項1、公差A_i → 総和 1/2 n (n+1) A + n

int main() {
  cout << fixed << setprecision(15);
  int n, d, x;
  cin >> n >> d >> x;
  ll ans = x;
  rep(i, n) {
    int a;
    cin >> a;
    int nowD = 1;
    do {
      ans++;
      nowD += a;
    } while (nowD <= d);
  }
  cout << ans << endl;
  return 0;
}
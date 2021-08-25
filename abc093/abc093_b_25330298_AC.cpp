/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc093/submissions/25330298
 * Submitted at: 2021-08-25 19:22:18
 * Problem URL: https://atcoder.jp/contests/abc093/tasks/abc093_b
 * Result: AC
 * Execution Time: 8 ms
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

int main() {
  cout << fixed << setprecision(15);
  ll a, b, k;
  cin >> a >> b >> k;
  ll1d ans;
  for (int i = a; i <= min(b, a + k - 1); i++) {
    cout << i << endl;
  }
  for (int i = max(a + k, b - k + 1); i <= b; i++) {
    cout << i << endl;
  }
  return 0;
}
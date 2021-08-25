/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc090/submissions/25329203
 * Submitted at: 2021-08-25 18:08:19
 * Problem URL: https://atcoder.jp/contests/abc090/tasks/abc090_b
 * Result: AC
 * Execution Time: 9 ms
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
  int a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = a; i <= b; i++) {
    if (i / 10000 == i % 10 && (i / 1000) % 10 == (i / 10) % 10) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
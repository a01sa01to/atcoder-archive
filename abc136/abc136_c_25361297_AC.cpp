/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/25361297
 * Submitted at: 2021-08-27 16:45:42
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: AC
 * Execution Time: 40 ms
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
  ll1d h(n);
  rep(i, n) cin >> h[i];
  bool ans = true;
  for (int i = n - 2; i >= 0; i--) {
    if (h[i] <= h[i + 1]) continue;
    if (h[i] == h[i + 1] + 1) h[i]--;
    else
      ans = false;
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
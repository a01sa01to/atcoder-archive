/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/25361171
 * Submitted at: 2021-08-27 16:38:56
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: WA
 * Execution Time: 42 ms
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
  rep(i, n) {
    cin >> h[i];
    if (i > 0 && h[i] < h[i - 1]) {
      h[i - 1]--;
    }
  }
  bool ans = true;
  rep(i, n) {
    if (i > 0 && h[i] < h[i - 1]) {
      ans = false;
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc052/submissions/25318056
 * Submitted at: 2021-08-24 23:14:17
 * Problem URL: https://atcoder.jp/contests/abc052/tasks/abc052_b
 * Result: AC
 * Execution Time: 7 ms
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0, x = 0;
  rep(i, n) {
    if (s[i] == 'I') {
      ans = max(ans, ++x);
    }
    else {
      x--;
    }
  }
  cout << ans << endl;
  return 0;
}
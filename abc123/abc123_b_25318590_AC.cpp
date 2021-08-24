/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc123/submissions/25318590
 * Submitted at: 2021-08-24 23:39:42
 * Problem URL: https://atcoder.jp/contests/abc123/tasks/abc123_b
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

int main() {
  cout << fixed << setprecision(15);
  vector<int> t(5);
  cin >> t[0] >> t[1] >> t[2] >> t[3] >> t[4];
  sort(all(t));
  int ans = 1e4;
  do {
    int tmp = 0;
    rep(i, 5) {
      tmp += t[i];
      if (i != 4) {
        tmp += (10 - (tmp % 10)) % 10;
      }
    }
    ans = min(ans, tmp);
  } while (next_permutation(all(t)));
  cout << ans << endl;
  return 0;
}
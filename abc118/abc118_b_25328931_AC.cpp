/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc118/submissions/25328931
 * Submitted at: 2021-08-25 17:49:29
 * Problem URL: https://atcoder.jp/contests/abc118/tasks/abc118_b
 * Result: AC
 * Execution Time: 22 ms
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
  int n, m;
  cin >> n >> m;
  ll1d likes(m);
  rep(i, n) {
    int k;
    cin >> k;
    rep(j, k) {
      int l;
      cin >> l;
      likes[--l]++;
    }
  }
  int ans = 0;
  rep(i, m) {
    if (likes[i] == n) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
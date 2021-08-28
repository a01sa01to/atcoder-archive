/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021/submissions/25378561
 * Submitted at: 2021-08-28 16:29:29
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021/tasks/rcl_contest_2021_a
 * Result: AC
 * Execution Time: 13 ms
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
  int n, m, k;
  cin >> n >> m >> k;
  ll1d a(n);
  vector<bool> fin(n, false);
  rep(i, n) cin >> a[i];
  while (m >= 0) {
    rep(i, n) {
      if (fin[i]) continue;
      ll minim = a[i];
      ll minimJ = -1;
      rep(j, n) {
        ll tmp = (a[i] + a[j]) % k;
        if (tmp < minim) {
          minim = tmp;
          minimJ = j;
        }
      }
      if (minimJ >= 0) {
        cout << i << " " << minimJ << endl;
        a[i] = minim;
        m--;
      }
      else {
        fin[i] = true;
      }
    }
    bool finAll = true;
    rep(i, n) {
      finAll &= fin[i];
    }
    if (finAll) break;
  }
  return 0;
}
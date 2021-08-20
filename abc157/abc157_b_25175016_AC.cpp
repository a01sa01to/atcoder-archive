/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/25175016
 * Submitted at: 2021-08-20 23:11:39
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_b
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
  ll2d a(3, ll1d(3));
  rep(i, 3) rep(j, 3) cin >> a[i][j];
  int n;
  cin >> n;
  rep(t, n) {
    int b;
    cin >> b;
    rep(i, 3) rep(j, 3) {
      if (a[i][j] == b) {
        a[i][j] = 0;
      }
    }
  }
  bool check = false;
  rep(i, 3) {
    bool chkTate = !a[i][0] && !a[i][1] && !a[i][2];
    bool chkYoko = !a[0][i] && !a[1][i] && !a[2][i];
    check |= chkTate || chkYoko;
  }
  bool chkNaname1 = true, chkNaname2 = true;
  rep(i, 3) {
    chkNaname1 &= !a[i][i];
    chkNaname2 &= !a[i][2 - i];
  }
  check |= chkNaname1 || chkNaname2;
  cout << (check ? "Yes" : "No") << endl;
  return 0;
}
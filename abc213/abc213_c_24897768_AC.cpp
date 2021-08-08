/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/24897768
 * Submitted at: 2021-08-09 00:36:00
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_c
 * Result: AC
 * Execution Time: 247 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll h, w, n;
  cin >> h >> w >> n;
  ll2d Grid(n, ll1d(3));
  loop(i, n) {
    ll x, y;
    cin >> x >> y;
    Grid[i] = { i, x, y };
  }

  sort(all(Grid), [](ll1d& a, ll1d& b) {
    return a[1] < b[1];
  });
  ll prevX = 0, overX = 0;
  loop(i, n) {
    if (prevX == Grid[i][1]) {
      Grid[i][1] = overX;
    }
    else {
      prevX = Grid[i][1];
      Grid[i][1] = ++overX;
    }
  }

  sort(all(Grid), [](ll1d& a, ll1d& b) {
    return a[2] < b[2];
  });
  ll prevY = 0, overY = 0;
  loop(i, n) {
    if (prevY == Grid[i][2]) {
      Grid[i][2] = overY;
    }
    else {
      prevY = Grid[i][2];
      Grid[i][2] = ++overY;
    }
  }

  sort(all(Grid), [](ll1d& a, ll1d& b) {
    return a[0] < b[0];
  });
  loop(i, n) {
    cout << Grid[i][1] << " " << Grid[i][2] << endl;
  }

  return 0;
}
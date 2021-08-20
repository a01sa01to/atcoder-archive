/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/25174816
 * Submitted at: 2021-08-20 23:03:01
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b
 * Result: WA
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
  ll h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) {
    cout << 0 << endl;
    return 0;
  }
  cout << (h * w + 1) / 2 << endl;
  return 0;
}
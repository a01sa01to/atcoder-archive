/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/25972160
 * Submitted at: 2021-09-19 11:41:48
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int x;
  cin >> x;
  if (x < 40) cout << 40 - x << endl;
  else if (x < 70)
    cout << 70 - x << endl;
  else if (x < 90)
    cout << 90 - x << endl;
  else
    cout << "expert" << endl;
  return 0;
}
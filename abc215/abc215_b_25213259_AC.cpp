/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc215/submissions/25213259
 * Submitted at: 2021-08-21 21:16:37
 * Problem URL: https://atcoder.jp/contests/abc215/tasks/abc215_b
 * Result: AC
 * Execution Time: 9 ms
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
  ll n;
  cin >> n;
  ll i = 0, now = 1;
  while (now * 2 <= n) {
    i++;
    now *= 2;
  }
  cout << i << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc214/submissions/25023074
 * Submitted at: 2021-08-14 21:04:06
 * Problem URL: https://atcoder.jp/contests/abc214/tasks/abc214_b
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
  int s, t;
  cin >> s >> t;
  int count = 0;
  for (int a = 0; a <= 100; a++) {
    for (int b = 0; b <= 100; b++) {
      for (int c = 0; c <= 100; c++) {
        if (a + b + c <= s && a * b * c <= t) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}
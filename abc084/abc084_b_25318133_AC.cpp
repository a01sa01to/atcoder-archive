/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc084/submissions/25318133
 * Submitted at: 2021-08-24 23:17:16
 * Problem URL: https://atcoder.jp/contests/abc084/tasks/abc084_b
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
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  if (s[a] != '-') {
    cout << "No" << endl;
    return 0;
  }
  rep(i, a + b + 1) {
    if (i != a && s[i] == '-') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
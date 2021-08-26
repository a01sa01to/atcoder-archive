/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc103/submissions/25346857
 * Submitted at: 2021-08-26 18:46:55
 * Problem URL: https://atcoder.jp/contests/abc103/tasks/abc103_b
 * Result: AC
 * Execution Time: 5 ms
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
  string s, t;
  cin >> s >> t;
  int n = s.size();
  bool ans = false;
  rep(i, n + 1) {
    s = s.back() + s.substr(0, n - 1);
    if (s == t) {
      ans = true;
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
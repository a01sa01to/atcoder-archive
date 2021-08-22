/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc114/submissions/25283438
 * Submitted at: 2021-08-23 00:53:57
 * Problem URL: https://atcoder.jp/contests/abc114/tasks/abc114_b
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
  string s;
  cin >> s;
  int ans = 1e3;
  rep(i, s.size() - 2) {
    string x_str = s.substr(i, 3);
    ans = min(ans, abs(stoi(x_str) - 753));
  }
  cout << ans << endl;
  return 0;
}
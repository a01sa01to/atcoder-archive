/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/25363193
 * Submitted at: 2021-08-27 18:50:11
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_c
 * Result: AC
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
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s;
  cin >> s;
  rep(i, 8) {
    int tmp = s[0] - '0';
    rep(j, 3) {
      if (i & 1 << j) {
        tmp += s[j + 1] - '0';
      }
      else {
        tmp -= s[j + 1] - '0';
      }
    }
    // cout << "[DEB] " << i << " " << tmp << endl;
    if (tmp == 7) {
      cout << s[0];
      rep(j, 3) {
        cout << (i & 1 << j ? "+" : "-") << s[j + 1];
      }
      cout << "=7" << endl;
      return 0;
    }
  }
  return 0;
}
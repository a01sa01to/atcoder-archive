/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/25362164
 * Submitted at: 2021-08-27 17:38:42
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_c
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
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s;
  ll k;
  cin >> s >> k;
  rep(i, min(ll(s.size()), k)) {
    if (s[i] != '1') {
      cout << s[i] << endl;
      return 0;
    }
  }
  cout << 1 << endl;
  return 0;
}
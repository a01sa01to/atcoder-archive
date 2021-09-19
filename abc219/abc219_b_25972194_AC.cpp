/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/25972194
 * Submitted at: 2021-09-19 11:43:21
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_b
 * Result: AC
 * Execution Time: 7 ms
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
  vector<string> s(3);
  rep(i, 3) cin >> s[i];
  string t;
  cin >> t;
  rep(i, t.size()) {
    cout << s[t[i] - '1'];
  }
  cout << endl;
  return 0;
}
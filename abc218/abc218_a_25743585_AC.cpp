/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/25743585
 * Submitted at: 2021-09-11 21:01:20
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_a
 * Result: AC
 * Execution Time: 6 ms
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
  int n;
  string s;
  cin >> n >> s;
  n--;
  cout << (s[n] == 'o' ? "Yes" : "No") << endl;
  return 0;
}
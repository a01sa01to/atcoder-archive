/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/25561882
 * Submitted at: 2021-09-04 21:03:43
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_b
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
  vector<string> v = { "ABC", "ARC", "AGC", "AHC" };
  set<string> s;
  rep(i, 3) {
    string c;
    cin >> c;
    s.insert(c);
  }
  rep(i, 4) {
    if (!s.count(v[i])) {
      cout << v[i] << endl;
    }
  }
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc044/submissions/25328961
 * Submitted at: 2021-08-25 17:51:40
 * Problem URL: https://atcoder.jp/contests/abc044/tasks/abc044_b
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
  string w;
  cin >> w;
  ll1d cs(26);
  rep(i, w.size()) {
    cs[w[i] - 'a']++;
  }
  bool ans = true;
  rep(i, 26) {
    if (cs[i] % 2 == 1) {
      ans = false;
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
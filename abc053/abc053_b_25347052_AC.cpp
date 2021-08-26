/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc053/submissions/25347052
 * Submitted at: 2021-08-26 18:59:02
 * Problem URL: https://atcoder.jp/contests/abc053/tasks/abc053_b
 * Result: AC
 * Execution Time: 13 ms
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
  int aidx = 1e6, zidx;
  rep(i, s.size()) {
    if (s[i] == 'A' && aidx == 1e6) {
      aidx = i;
    }
    if (s[i] == 'Z') {
      zidx = i;
    }
  }
  cout << zidx - aidx + 1 << endl;
  return 0;
}
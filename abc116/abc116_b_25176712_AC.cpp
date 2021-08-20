/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc116/submissions/25176712
 * Submitted at: 2021-08-21 00:34:22
 * Problem URL: https://atcoder.jp/contests/abc116/tasks/abc116_b
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
  int s;
  cin >> s;
  ll prev = s;
  set<ll> found;
  found.insert(s);
  rep(i, 1e6) {
    ll next;
    if (prev % 2 == 0) {
      next = prev / 2;
    }
    else {
      next = 3 * prev + 1;
    }
    if (found.count(next)) {
      cout << i + 2 << endl;
      return 0;
    }
    else {
      found.insert(next);
      prev = next;
    }
  }
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc071/submissions/25318272
 * Submitted at: 2021-08-24 23:23:06
 * Problem URL: https://atcoder.jp/contests/abc071/tasks/abc071_b
 * Result: WA
 * Execution Time: 12 ms
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
  vector<bool> seen(26, false);
  rep(i, s.size()) {
    seen[s[i] - 'a'] = true;
  }
  rep(i, s.size()) {
    if (!seen[i]) {
      cout << char('a' + i) << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}
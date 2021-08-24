/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc063/submissions/25317993
 * Submitted at: 2021-08-24 23:11:32
 * Problem URL: https://atcoder.jp/contests/abc063/tasks/abc063_b
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

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s;
  cin >> s;
  set<char> seen;
  rep(i, s.size()) {
    if (seen.count(s[i])) {
      cout << "no" << endl;
      return 0;
    }
    seen.insert(s[i]);
  }
  cout << "yes" << endl;
  return 0;
}
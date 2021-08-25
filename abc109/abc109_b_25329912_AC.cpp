/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc109/submissions/25329912
 * Submitted at: 2021-08-25 18:55:29
 * Problem URL: https://atcoder.jp/contests/abc109/tasks/abc109_b
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
  int n;
  cin >> n;
  set<string> said;
  string prev, s;
  bool ans = true;
  rep(i, n) {
    cin >> s;
    if (i != 0) {
      if (prev.back() == s.front() && !said.count(s)) {
        said.insert(s);
        prev = s;
      }
      else {
        ans = false;
      }
    }
    else {
      prev = s;
      said.insert(s);
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
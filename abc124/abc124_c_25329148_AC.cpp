/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc124/submissions/25329148
 * Submitted at: 2021-08-25 18:04:40
 * Problem URL: https://atcoder.jp/contests/abc124/tasks/abc124_c
 * Result: AC
 * Execution Time: 11 ms
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
  int ansW = 0, ansB = 0;
  rep(i, s.size()) {
    if (i % 2) {
      if (s[i] == '0') {
        ansB++;
      }
      else if (s[i] == '1') {
        ansW++;
      }
    }
    else {
      if (s[i] == '0') {
        ansW++;
      }
      else if (s[i] == '1') {
        ansB++;
      }
    }
  }
  cout << min(ansW, ansB) << endl;
  return 0;
}
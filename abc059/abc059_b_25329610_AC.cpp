/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc059/submissions/25329610
 * Submitted at: 2021-08-25 18:34:07
 * Problem URL: https://atcoder.jp/contests/abc059/tasks/abc059_b
 * Result: AC
 * Execution Time: 6 ms
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
  string a, b;
  cin >> a >> b;
  if (a.size() > b.size()) {
    cout << "GREATER" << endl;
  }
  else if (a.size() < b.size()) {
    cout << "LESS" << endl;
  }
  else {
    rep(i, a.size()) {
      if (a[i] > b[i]) {
        cout << "GREATER" << endl;
        return 0;
      }
      else if (a[i] < b[i]) {
        cout << "LESS" << endl;
        return 0;
      }
    }
    cout << "EQUAL" << endl;
  }
  return 0;
}
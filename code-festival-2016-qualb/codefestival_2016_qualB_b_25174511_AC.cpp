/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-qualb/submissions/25174511
 * Submitted at: 2021-08-20 22:49:14
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
 * Result: AC
 * Execution Time: 157 ms
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
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int abr = 0, dec = 0;
  rep(i, n) {
    if (s[i] == 'a' && dec < a + b) {
      dec++;
      cout << "Yes" << endl;
    }
    else if (s[i] == 'b' && dec < a + b && abr < b) {
      abr++;
      dec++;
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}
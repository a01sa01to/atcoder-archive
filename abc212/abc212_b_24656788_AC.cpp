/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc212/submissions/24656788
 * Submitted at: 2021-07-31 21:11:41
 * Problem URL: https://atcoder.jp/contests/abc212/tasks/abc212_b
 * Result: AC
 * Execution Time: 8 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s;
  cin >> s;
  vector<int> v(3, 0);
  loop(i, 3) {
    if (s[i + 1] - '0' == (s[i] - '0' + 1) % 10) {
      v[i] = 1;
    }
    else if (s[i] == s[i + 1]) {
      v[i] = 2;
    }
  }
  bool isStrong = true;
  if (v[0] == v[1] && v[2] == v[0] && v[0] != 0) {
    isStrong = false;
  }
  cout << (isStrong ? "Strong" : "Weak") << endl;
  return 0;
}
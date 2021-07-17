/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc210/submissions/24287228
 * Submitted at: 2021-07-17 21:06:42
 * Problem URL: https://atcoder.jp/contests/abc210/tasks/abc210_b
 * Result: AC
 * Execution Time: 12 ms
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
  int n;
  string s;
  cin >> n >> s;
  loop(i, n) {
    if (s[i] == '1') {
      cout << (i % 2 ? "Aoki" : "Takahashi") << endl;
      return 0;
    }
  }
  return 0;
}
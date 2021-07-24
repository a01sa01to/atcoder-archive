/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/24498688
 * Submitted at: 2021-07-24 21:22:02
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_c
 * Result: AC
 * Execution Time: 11 ms
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

typedef modint1000000007 mint;

int main() {
  cout << fixed << setprecision(15);
  string s;
  cin >> s;
  vector<mint> a(8);
  loop(i, s.size()) {
    switch (s[s.size() - i - 1]) {
      case 'c':
        a[0] += a[1];
        break;
      case 'h':
        a[1] += a[2];
        break;
      case 'o':
        a[2] += a[3];
        break;
      case 'k':
        a[3] += a[4];
        break;
      case 'u':
        a[4] += a[5];
        break;
      case 'd':
        a[5] += a[6];
        break;
      case 'a':
        a[6] += a[7];
        break;
      case 'i':
        a[7]++;
        break;
    }
  }
  cout << a[0].val() << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc209/submissions/24119034
 * Submitted at: 2021-07-10 21:11:00
 * Problem URL: https://atcoder.jp/contests/abc209/tasks/abc209_c
 * Result: AC
 * Execution Time: 398 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ull> ull1d;
typedef vector<ull1d> ull2d;
typedef vector<ull2d> ull3d;

#define loop(i, n) for (ull i = 0; i < n; i++)
#define rloop(i, n) for (ll i = n - 1; i >= 0; i--)
#define all(vec) vec.begin(), vec.end()

typedef modint1000000007 mint;

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  ull1d c(n);
  loop(i, n) { cin >> c[i]; }
  sort(all(c));
  mint ans = 1;
  loop(i, n) {
    ans *= c[i] - i;
  }
  cout << ans.val() << endl;
  return 0;
}
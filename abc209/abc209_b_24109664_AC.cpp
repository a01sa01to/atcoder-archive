/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc209/submissions/24109664
 * Submitted at: 2021-07-10 21:03:48
 * Problem URL: https://atcoder.jp/contests/abc209/tasks/abc209_b
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
typedef vector<ull> ull1d;
typedef vector<ull1d> ull2d;
typedef vector<ull2d> ull3d;

#define loop(i, n) for (ull i = 0; i < n; i++)
#define rloop(i, n) for (ll i = n - 1; i >= 0; i--)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, x;
  cin >> n >> x;
  loop(i, n) {
    int a;
    cin >> a;
    if (i % 2 == 1) {
      a--;
    }
    x -= a;
  }
  if (x < 0) { cout << "No" << endl; }
  else {
    cout << "Yes" << endl;
  }

  return 0;
}
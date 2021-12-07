/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc122/submissions/27750753
 * Submitted at: 2021-12-07 18:33:32
 * Problem URL: https://atcoder.jp/contests/arc122/tasks/arc122_b
 * Result: AC
 * Execution Time: 77 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
int n;
vector<int> a;
ld f(ld x) {
  ld ret = 0;
  for (int i = 0; i < n; ++i) {
    ret += x + a[i] - min(ld(a[i]), 2 * x);
  }
  return ret / n;
}
int main() {
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  sort(a.begin(), a.end());
  ld l = 0, r = 1e9, delta = 1e-10;
  while (l + delta < r) {
    ld c1 = l + (r - l) / 3;
    ld c2 = l + (r - l) / 3 * 2;
    if (f(c1) < f(c2)) {
      r = c2;
    }
    else {
      l = c1;
    }
  }
  cout << fixed << setprecision(15) << f(l) << endl;
}
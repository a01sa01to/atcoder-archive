/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30960728
 * Submitted at: 2022-04-14 16:58:53
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_ad
 * Result: AC
 * Execution Time: 47 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int x;
  cin >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());
  auto l = lower_bound(a.begin(), a.end(), x);
  auto r = upper_bound(a.begin(), a.end(), x);
  cout << (r - l > 0 ? "Yes" : "No") << endl;
  return 0;
}
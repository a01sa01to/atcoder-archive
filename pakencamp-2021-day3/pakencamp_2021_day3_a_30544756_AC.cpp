/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day3/submissions/30544756
 * Submitted at: 2022-03-29 15:17:35
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day3/tasks/pakencamp_2021_day3_a
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int ans = 0;
  rep(_, 4) {
    int s;
    cin >> s;
    if (s == 1111) ++ans;
  }
  cout << ans << endl;
  return 0;
}
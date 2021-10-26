/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/26826918
 * Submitted at: 2021-10-26 17:14:53
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, t;
  cin >> n >> m >> t;
  const int init = n;
  int prev = 0;
  while (m--) {
    int a, b;
    cin >> a >> b;
    n -= min(n, a - prev);
    if (!n) {
      puts("No");
      return 0;
    }
    n = min(n + b - a, init);
    prev = b;
  }
  n -= min(n, t - prev);
  puts(n ? "Yes" : "No");
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202109-open/submissions/30972926
 * Submitted at: 2022-04-15 10:20:16
 * Problem URL: https://atcoder.jp/contests/past202109-open/tasks/past202109_d
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;

int div(int n) {
  vector<int> d(0);
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      d.push_back(i);
      if (i * i != n) d.push_back(n / i);
    }
  }
  return d.size();
}

int main() {
  int x, y;
  cin >> x >> y;
  int dx = div(x), dy = div(y);

  if (dx == dy)
    puts("Z");
  else
    puts(dx < dy ? "Y" : "X");
  return 0;
}
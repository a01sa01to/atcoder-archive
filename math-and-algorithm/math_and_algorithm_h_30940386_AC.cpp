/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940386
 * Submitted at: 2022-04-13 12:26:06
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_h
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s;
  cin >> n >> s;
  int cnt = 0;

  for (int red = 1; red <= n; ++red)
    for (int blue = 1; blue <= n; ++blue)
      if (red + blue <= s)
        ++cnt;

  cout << cnt << endl;
  return 0;
}
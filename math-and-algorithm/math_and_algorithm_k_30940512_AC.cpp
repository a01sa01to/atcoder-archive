/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940512
 * Submitted at: 2022-04-13 12:37:19
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_k
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<bool> filt(n, true);
  filt[0] = false;
  for (int i = 2; i <= n; ++i) {
    if (filt[i - 1]) {
      for (int j = 2 * i; j <= n; j += i) {
        filt[j - 1] = false;
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    if (filt[i]) cout << i + 1 << " ";
  }
  cout << endl;
  return 0;
}
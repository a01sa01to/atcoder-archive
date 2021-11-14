/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc227/submissions/27246704
 * Submitted at: 2021-11-14 09:23:48
 * Problem URL: https://atcoder.jp/contests/abc227/tasks/abc227_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
int main() {
  int n, k, a;
  cin >> n >> k >> a;
  a -= 2;
  for (int i = 0; i < k; i++) {
    a++;
    a %= n;
  }
  cout << a + 1 << endl;
  return 0;
}
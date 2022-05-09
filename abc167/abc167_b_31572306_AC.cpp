/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/31572306
 * Submitted at: 2022-05-09 22:28:08
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int a, b, c, k;
  cin >> a >> b >> c >> k;

  //  A≧Kなら、K枚の全部が1 → 答えはK
  if (a >= k) {
    cout << k << endl;
  }
  // そうではなく、A+B≧Kなら、1がA枚、残りは0 → 答えはA
  else if (a + b >= k) {
    cout << a << endl;
  }
  // そうではない場合、1がA枚、0がB枚、残りのK-A-B枚は-1 → 答えはA-(K-A-B) = 2A+B-K
  else {
    cout << 2 * a + b - k << endl;
  }
}
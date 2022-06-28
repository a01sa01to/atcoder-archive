/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc126/submissions/32811956
 * Submitted at: 2022-06-28 15:27:09
 * Problem URL: https://atcoder.jp/contests/arc126/tasks/arc126_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  // t回繰り返す
  for (int _ = 0; _ < t; _++) {
    long long n2, n3, n4;
    cin >> n2 >> n3 >> n4;

    // 長さ6の棒を作る
    long long n6 = n3 / 2;

    // 6 + 4
    long long ans6_4 = min(n6, n4);
    // 使った分を減らす
    n4 -= ans6_4;
    n6 -= ans6_4;

    // 6 + 2 + 2
    long long ans6_2_2 = min(n6, n2 / 2);
    n2 -= ans6_2_2 * 2;
    n6 -= ans6_2_2;

    // 4+4+2
    long long ans4_4_2 = min(n4 / 2, n2);
    n2 -= ans4_4_2;
    n4 -= ans4_4_2 * 2;

    // 4+2+2+2
    long long ans4_2_2_2 = min(n4, n2 / 3);
    n2 -= ans4_2_2_2 * 3;
    n4 -= ans4_2_2_2;

    // 2+2+2+2+2
    long long ans2_2_2_2_2 = n2 / 5;
    n2 -= ans2_2_2_2_2 * 5;

    // 答えは、これらの合計
    cout << ans6_4 + ans6_2_2 + ans4_4_2 + ans4_2_2_2 + ans2_2_2_2_2 << endl;
  }
}
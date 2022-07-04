/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc193/submissions/32987787
 * Submitted at: 2022-07-05 00:15:55
 * Problem URL: https://atcoder.jp/contests/abc193/tasks/abc193_c
 * Result: AC
 * Execution Time: 78 ms
 */

# 入力
from math import floor, sqrt


n = int(input())

s = set()

# 調べ上げる
for a in range(2, floor(sqrt(n)) + 1):
    # 2乗の値から調べる
    t = a ** 2
    # 現在の値がnより小さいとき
    while t <= n:
        # その値を追加
        s.add(t)
        # bを1増やす = a倍する
        t *= a

# 出力
print(n - len(s))

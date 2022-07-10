/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/33143445
 * Submitted at: 2022-07-10 16:57:39
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ca
 * Result: AC
 * Execution Time: 24 ms
 */

# 入力
n = int(input())
v = []
for i in range(n):
    # 逆順にして入力する
    v.append(tuple(map(int, input().split()[::-1])))

# ソート
v.sort()

# 出力
for i in range(n):
    # 元の順番に戻してから出力
    print(*v[i][::-1])

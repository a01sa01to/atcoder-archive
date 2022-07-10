/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/33143414
 * Submitted at: 2022-07-10 16:55:53
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ca
 * Result: RE
 * Execution Time: 25 ms
 */

# 入力
n = int(input())
v = []
for i in range(n):
    # 逆順にして入力する
    v.append(tuple(map(int, input().split().reverse())))

# ソート
v.sort()

# 出力
for i in range(n):
    # 元の順番に戻してから出力
    print(*v[i][::-1])

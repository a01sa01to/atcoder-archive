/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/32983015
 * Submitted at: 2022-07-04 19:41:19
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_bz
 * Result: AC
 * Execution Time: 75 ms
 */

# 入力
n = int(input())
a = list(map(int, input().split()))

# 個数を数える
cnt = {}
for i in a:
    if i in cnt:
        cnt[i] += 1
    else:
        cnt[i] = 1

# 最大値を求める
# 仮に、制約的にあり得ない値(-1)にしておく
maxValue = -1
maxCount = -1
for i in cnt:
    # 個数が多い場合には更新
    if cnt[i] > maxCount:
        maxValue = i
        maxCount = cnt[i]

# 出力
print(maxValue, maxCount)

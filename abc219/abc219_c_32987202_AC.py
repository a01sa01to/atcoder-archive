/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/32987202
 * Submitted at: 2022-07-04 23:36:33
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_c
 * Result: AC
 * Execution Time: 204 ms
 */

# xの入力
x = input()

# 新たな順番と普通の順番の対応付け
# mp[x] = xの普通の順番に対応するアルファベット
# mpinv[x] = xの新しい順番
# mpinv[mp[x]] = x と戻ってくることになる
mp = {}
mpinv = {}
for i in range(26):
    mp[x[i]] = chr(ord('a') + i)
    mpinv[chr(ord('a') + i)] = x[i]

# 入力
n = int(input())
v = []
for i in range(n):
    # 入力
    s = input()
    # いったん普通のアルファベット順に対応させる
    s = ''.join(mp[c] for c in s)
    v.append(s)

# 普通のアルファベット順になっているので、ソート可能
v.sort()

# 小さい順に出力
for i in range(n):
    # 元の文字列に戻してあげる必要がある
    print(''.join(mpinv[c] for c in v[i]))

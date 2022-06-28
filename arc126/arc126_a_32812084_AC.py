/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc126/submissions/32812084
 * Submitted at: 2022-06-28 15:33:45
 * Problem URL: https://atcoder.jp/contests/arc126/tasks/arc126_a
 * Result: AC
 * Execution Time: 22 ms
 */

t = int(input())
# t回繰り返す
for _ in range(t):
    n2, n3, n4 = map(int, input().split())

    # 長さ3から長さ6の棒を作る
    n6 = n3 // 2

    # 6 + 4
    ans6_4 = min(n6, n4)
    # 使った分を減らす
    n4 -= ans6_4
    n6 -= ans6_4

    # 6 + 2 + 2
    ans6_2_2 = min(n6, n2 // 2)
    n2 -= ans6_2_2 * 2
    n6 -= ans6_2_2

    # 4 + 4 + 2
    ans4_4_2 = min(n4 // 2, n2)
    n2 -= ans4_4_2
    n4 -= ans4_4_2 * 2

    # 4 + 2 + 2 + 2
    ans4_2_2_2 = min(n4, n2 // 3)
    n2 -= ans4_2_2_2 * 3
    n4 -= ans4_2_2_2

    # 2 + 2 + 2 + 2 + 2
    ans2_2_2_2_2 = n2 // 5
    n2 -= ans2_2_2_2_2 * 5

    # 答えは、これらの合計
    print(ans6_4 + ans6_2_2 + ans4_4_2 + ans4_2_2_2 + ans2_2_2_2_2)

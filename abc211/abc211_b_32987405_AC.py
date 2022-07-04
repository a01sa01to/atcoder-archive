/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/32987405
 * Submitted at: 2022-07-04 23:51:27
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_b
 * Result: AC
 * Execution Time: 22 ms
 */

# あらかじめsetを用意
st = set()

# s1 ～ s4 を入力し、それぞれをsetに挿入する
for i in range(4):
    s = input()
    st.add(s)

# set.sizeが4ならYes、そうでなければNo
print("Yes" if len(st) == 4 else "No")

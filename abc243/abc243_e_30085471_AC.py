/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/30085471
 * Submitted at: 2022-03-13 00:02:00
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_e
 * Result: AC
 * Execution Time: 536 ms
 */

N, M = map(int, input().split())
es = []
inf = 10**18
for _ in range(M):
  a, b, c = map(int, input().split())
  es.append((a - 1, b - 1, c))

d = [[inf] * N for _ in range(N)]
for a, b, c in es:
  d[a][b] = c
  d[b][a] = c
for k in range(N):
  for i in range(N):
    for j in range(N):
      d[i][j] = min(d[i][j], d[i][k] + d[k][j])

answer = 0
for a, b, c in es:
  unused = 0
  for i in range(N):
    if d[a][i] + d[i][b] <= c:
      unused = 1
  answer += unused
print(answer)

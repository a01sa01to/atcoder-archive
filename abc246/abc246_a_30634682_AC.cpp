/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30634682
 * Submitted at: 2022-04-02 21:10:54
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_a
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  vector<pair<int, int>> v(3);
  rep(i, 3) cin >> v[i].first >> v[i].second;

  if (v[0].first == v[1].first)
    printf("%d ", v[2].first);
  else if (v[0].first == v[2].first)
    printf("%d ", v[1].first);
  else if (v[2].first == v[1].first)
    printf("%d ", v[0].first);

  if (v[0].second == v[1].second)
    printf("%d\n", v[2].second);
  else if (v[0].second == v[2].second)
    printf("%d\n", v[1].second);
  else if (v[2].second == v[1].second)
    printf("%d\n", v[0].second);

  return 0;
}
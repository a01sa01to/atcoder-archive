/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day2/submissions/30521208
 * Submitted at: 2022-03-28 10:21:09
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day2/tasks/pakencamp_2021_day2_c
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  set<int> s(b.begin(), b.end());
  rep(i, n) s.erase(a[i]);
  cout << s.size() << endl;
  for (int x : s) cout << x << endl;
  return 0;
}
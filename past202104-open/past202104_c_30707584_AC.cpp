/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/30707584
 * Submitted at: 2022-04-04 00:20:05
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<bitset<50>> a(n, 0);
  rep(i, n) {
    int k;
    cin >> k;
    while (k--) {
      int t;
      cin >> t;
      a[i].flip(--t);
    }
  }
  int p, q;
  cin >> p >> q;
  bitset<50> cand;
  rep(i, p) {
    int t;
    cin >> t;
    cand.flip(--t);
  }
  int ans = 0;
  rep(i, n) {
    if ((a[i] & cand).count() >= q) ++ans;
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day3/submissions/30547526
 * Submitted at: 2022-03-29 17:24:30
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day3/tasks/pakencamp_2021_day3_e
 * Result: WA
 * Execution Time: 3308 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef pair<int, int> P;

int op(int a, int b) { return lcm(a, b); }
int e() { return 1; }

int main() {
  int n, q;
  cin >> n >> q;
  segtree<int, op, e> seg(n);
  rep(i, n) {
    int x;
    cin >> x;
    seg.set(i, x);
  }
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int k, a;
      cin >> k >> a;
      --k;
      int x = seg.get(k);
      seg.set(k, x + a);
    }
    else if (t == 2) {
      int k, a;
      cin >> k >> a;
      --k;
      int x = seg.get(k);
      seg.set(k, x - a);
    }
    else {
      int s;
      cin >> s;
      int ans = 0;
      rep(i, n) rep(j, n) {
        if (i > j) continue;
        // Debug(seg.prod(i, j + 1));
        if (seg.prod(i, j + 1) == s) ++ans;
      }
      cout << ans << endl;
    }
  }
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29151546
 * Submitted at: 2022-02-08 00:17:31
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ah
 * Result: AC
 * Execution Time: 119 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  map<int, int> cnt;
  int l = 0, r = 0, b = 0, ans = 0;
  while (l < n) {
    while (r < n) {
      if (cnt[a[r]] == 0 && b == k) break;
      if (cnt[a[r]] == 0) ++b;
      ++cnt[a[r]];
      ++r;
    }
    ans = max(ans, r - l);
    if (cnt[a[l]] == 1) --b;
    --cnt[a[l]];
    ++l;
  }
  cout << ans << endl;
  return 0;
}
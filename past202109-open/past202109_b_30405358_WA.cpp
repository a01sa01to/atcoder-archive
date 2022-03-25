/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202109-open/submissions/30405358
 * Submitted at: 2022-03-26 00:00:39
 * Problem URL: https://atcoder.jp/contests/past202109-open/tasks/past202109_b
 * Result: WA
 * Execution Time: 15 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  set<int> ans;
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (a[i] == b[j]) {
      ans.insert(a[i]);
      ++i;
      ++j;
    }
    if (a[i] < b[j]) {
      ++i;
    }
    else {
      ++j;
    }
  }
  for (auto x : ans) cout << x << " ";
  cout << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc022/submissions/34053195
 * Submitted at: 2022-08-15 00:39:41
 * Problem URL: https://atcoder.jp/contests/arc022/tasks/arc022_2
 * Result: AC
 * Execution Time: 37 ms
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
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  unordered_set<int> st;
  int ans = 0;
  int l = 0, r = 0;
  while (r < n) {
    if (st.count(a[r])) {
      st.erase(a[l]);
      ++l;
    }
    else {
      st.insert(a[r]);
      ++r;
      ans = max(ans, r - l);
    }
  }
  cout << ans << endl;
  return 0;
}
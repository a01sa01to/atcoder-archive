/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc110/submissions/36901505
 * Submitted at: 2022-12-01 00:13:55
 * Problem URL: https://atcoder.jp/contests/arc110/tasks/arc110_c
 * Result: AC
 * Execution Time: 341 ms
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
  vector<int> ans(0);
  vector<bool> used(n - 1, false);
  vector<int> idx(n, -1);
  rep(i, n) {
    idx[a[i] - 1] = i;
  }
  rep(i, n) {
    Debug(i, idx[i]);
    if (idx[i] != i) {
      for (int j = idx[i] - 1; j >= i; j--) {
        Debug(used, idx, a);
        if (used[j]) {
          cout << -1 << endl;
          return 0;
        }
        used[j] = true;
        ans.push_back(j + 1);
        swap(idx[a[j] - 1], idx[a[j + 1] - 1]);
        swap(a[j], a[j + 1]);
      }
    }
  }
  if (ans.size() != n - 1) {
    cout << -1 << endl;
  }
  else {
    rep(i, n - 1) {
      cout << ans[i] << endl;
    }
  }
  return 0;
}
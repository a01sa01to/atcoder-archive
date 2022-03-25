/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202109-open/submissions/30405371
 * Submitted at: 2022-03-26 00:01:40
 * Problem URL: https://atcoder.jp/contests/past202109-open/tasks/past202109_b
 * Result: AC
 * Execution Time: 7 ms
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
  set<int> ans;
  rep(i, n) rep(j, m) {
    if (a[i] == b[j]) {
      ans.insert(a[i]);
      break;
    }
  }
  for (auto x : ans) cout << x << " ";
  cout << endl;
  return 0;
}
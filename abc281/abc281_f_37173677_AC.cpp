/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37173677
 * Submitted at: 2022-12-10 22:06:36
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_f
 * Result: AC
 * Execution Time: 2055 ms
 */

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("unroll-loops")

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

int dfs(const vector<int>& a, const vector<int>& b, int res, int dep) {
  Debug(b, res, dep);
  if (dep == -1) {
    int ans = 0;
    rep(i, a.size()) {
      ans = max(ans, a[i] ^ res);
    }
    return ans;
  }
  int n = b.size();
  bool all0 = true, all1 = true;
  rep(i, n) {
    if (b[i] & (1 << dep))
      all0 = false;
    else
      all1 = false;
  }
  if (all0) return dfs(a, b, res, dep - 1);
  if (all1) return dfs(a, b, res + (1 << dep), dep - 1);

  vector<int> nxt0(0), nxt1(0);
  rep(i, n) {
    if (b[i] & (1 << dep))
      nxt1.push_back(b[i]);
    else
      nxt0.push_back(b[i]);
  }
  int ans0 = dfs(a, nxt1, res, dep - 1);
  int ans1 = dfs(a, nxt0, res + (1 << dep), dep - 1);
  return min(ans0, ans1);
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = dfs(a, a, 0, 30);
  cout << ans << endl;
  return 0;
}
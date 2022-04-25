/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc038/submissions/31259549
 * Submitted at: 2022-04-25 15:15:51
 * Problem URL: https://atcoder.jp/contests/abc038/tasks/abc038_c
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector spl(0, vector<int>(0));
  {
    vector<int> tmp(0);
    rep(i, n) {
      if (i == 0) {
        tmp.push_back(a[i]);
        continue;
      }
      if (tmp.back() < a[i]) {
        tmp.push_back(a[i]);
      }
      else {
        spl.push_back(tmp);
        tmp.clear();
        tmp.push_back(a[i]);
      }
    }
    spl.push_back(tmp);
  }
  Debug(spl);
  ll ans = 0;
  rep(i, spl.size()) {
    ans += ll(spl[i].size()) * ll(spl[i].size() + 1) / 2;
  }
  cout << ans << endl;
  return 0;
}
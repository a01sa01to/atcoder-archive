/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31514089
 * Submitted at: 2022-05-08 21:01:14
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_a
 * Result: AC
 * Execution Time: 3 ms
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
  int h,w,r,c;cin>>h>>w>>r>>c;
  int ans = 4;
  if(r == 1) ans--;
  if(c == 1) ans--;
  if(r == h) ans--;
  if(c == w) ans--;
  cout << ans << endl;
  return 0;
}
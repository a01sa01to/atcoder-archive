/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32019472
 * Submitted at: 2022-05-28 21:21:59
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_a
 * Result: AC
 * Execution Time: 14 ms
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
  int a,b,c;cin>>a>>b>>c;
  if(a > c) swap(a,c);
  if(a <= b && b <= c) puts("Yes");
  else puts("No");
  return 0;
}
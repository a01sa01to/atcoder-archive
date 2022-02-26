/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/29660472
 * Submitted at: 2022-02-26 21:01:11
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_a
 * Result: AC
 * Execution Time: 6 ms
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
  vector<int> a(10);
  rep(i, 10) cin >> a[i];
  cout << a[a[a[0]]] << endl;
  return 0;
}
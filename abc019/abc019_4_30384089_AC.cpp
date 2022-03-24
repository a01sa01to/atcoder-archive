/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc019/submissions/30384089
 * Submitted at: 2022-03-24 19:54:15
 * Problem URL: https://atcoder.jp/contests/abc019/tasks/abc019_4
 * Result: AC
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
  int n;
  cin >> n;
  vector<int> a(n, 0);
  rep(i, n - 1) {
    printf("? 1 %d\n", i + 2);
    fflush(stdout);
    int x;
    cin >> x;
    a[i + 1] = x;
  }
  int m = distance(a.begin(), max_element(a.begin(), a.end()));
  rep(i, n) {
    if (i == m) continue;
    printf("? %d %d\n", i + 1, m + 1);
    fflush(stdout);
    int x;
    cin >> x;
    a[i] = x;
  }
  printf("! %d\n", *max_element(a.begin(), a.end()));
  return 0;
}
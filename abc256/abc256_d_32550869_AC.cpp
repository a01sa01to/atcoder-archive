/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32550869
 * Submitted at: 2022-06-18 21:21:38
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_d
 * Result: AC
 * Execution Time: 99 ms
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
  const int INF = 2e5;
  vector<int> imos(INF + 1, 0);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    imos[a]++;
    imos[b]--;
  }
  rep(i, INF) imos[i + 1] += imos[i];
  bool h = false;
  int l = 0;
  rep(i, INF + 1) {
    if (!h && imos[i] != 0) {
      h = true;
      l = i;
    }
    else if (h && imos[i] == 0) {
      printf("%d %d\n", l, i);
      h = false;
    }
  }
  return 0;
}
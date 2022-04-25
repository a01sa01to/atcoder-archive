/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc014/submissions/31259217
 * Submitted at: 2022-04-25 14:57:52
 * Problem URL: https://atcoder.jp/contests/abc014/tasks/abc014_3
 * Result: AC
 * Execution Time: 65 ms
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
  const int INF = 1e6;
  vector<int> imos(INF + 2, 0);
  int n;
  cin >> n;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    imos[a]++;
    imos[b + 1]--;
  }
  rep(i, INF + 1) imos[i + 1] += imos[i];
  cout << *max_element(imos.begin(), imos.end()) << endl;
  return 0;
}
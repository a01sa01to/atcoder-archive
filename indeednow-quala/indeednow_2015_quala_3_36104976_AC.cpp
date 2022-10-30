/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/indeednow-quala/submissions/36104976
 * Submitted at: 2022-10-31 00:55:58
 * Problem URL: https://atcoder.jp/contests/indeednow-quala/tasks/indeednow_2015_quala_3
 * Result: AC
 * Execution Time: 225 ms
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
  constexpr int INF = 1e6 + 1;
  vector<int> cnt(INF, 0);
  rep(i, n) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  cnt[0] = 0;
  vector<int> sum(INF + 1, 0);
  for (int i = 1e6; i >= 0; i--) {
    sum[i] = sum[i + 1] + cnt[i];
  }
  int q;
  cin >> q;
  while (q--) {
    int k;
    cin >> k;
    auto itr = upper_bound(sum.rbegin(), sum.rend(), k);
    cout << INF + 1 - (itr - sum.rbegin()) << endl;
  }
  return 0;
}
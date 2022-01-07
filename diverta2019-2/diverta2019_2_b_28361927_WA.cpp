/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/diverta2019-2/submissions/28361927
 * Submitted at: 2022-01-07 18:39:44
 * Problem URL: https://atcoder.jp/contests/diverta2019-2/tasks/diverta2019_2_b
 * Result: WA
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
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  map<pair<int, int>, int> cnt;
  sort(v.begin(), v.end());
  rep(i, n) rep(j, n) {
    if (i == j) continue;
    int dx = v[j].first - v[i].first;
    int dy = v[j].second - v[i].second;
    ++cnt[{ dx, dy }];
  }
  int maxim = max_element(cnt.begin(), cnt.end(), [](auto a, auto b) {
                return a.second < b.second;
              })->second;
  cout << n - maxim << endl;
  return 0;
}
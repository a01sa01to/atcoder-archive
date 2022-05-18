/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc170/submissions/31787289
 * Submitted at: 2022-05-19 00:11:46
 * Problem URL: https://atcoder.jp/contests/abc170/tasks/abc170_d
 * Result: AC
 * Execution Time: 123 ms
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
  sort(a.begin(), a.end());

  map<int, int> cnt;
  rep(i, n) cnt[a[i]]++;

  int ans = 0;
  const int INF = *max_element(a.begin(), a.end());
  vector<bool> filtering(INF + 1, true);
  rep(i, n) {
    if (filtering[a[i]]) {
      if (cnt[a[i]] == 1) ans++;
      for (int j = a[i] * 2; j <= INF; j += a[i]) {
        filtering[j] = false;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
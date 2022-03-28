/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day2/submissions/30521369
 * Submitted at: 2022-03-28 10:30:56
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day2/tasks/pakencamp_2021_day2_d
 * Result: AC
 * Execution Time: 179 ms
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
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> c(0);
  bool chk = false;
  sort(a.begin(), a.end());
  rep(i, n) {
    if (i == 0) {
      if (a[i] > 1) chk = true;
    }
    else if (i == n - 1) {
      if (a[i] < m) chk = true;
    }
    else {
      if (a[i] != a[i - 1] + 1 && a[i] != a[i - 1])
        chk = true;
    }
  }
  {  // Compress
    set<int> s;
    s.insert(m);
    rep(i, n) s.insert(a[i]);
    map<int, int> mp;
    int cnt = 0;
    for (int x : s) mp[x] = cnt++;
    rep(i, n) a[i] = mp[a[i]];
    c.resize(cnt);
  }
  rep(i, n)++ c[a[i]];
  auto [minim, maxim] = minmax_element(c.begin(), c.end());
  if (chk) {
    printf("%d %d\n", 0, *maxim);
  }
  else {
    printf("%d %d\n", *minim, *maxim);
  }
  return 0;
}
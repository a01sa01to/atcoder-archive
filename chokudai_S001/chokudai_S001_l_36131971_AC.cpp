/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/36131971
 * Submitted at: 2022-11-01 15:01:46
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_l
 * Result: AC
 * Execution Time: 87 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  map<int, int> mp;
  rep(i, n) mp[a[i]] = i + 1;
  int cnt = 0;
  rep(i, n) {
    if (a[i] != i + 1) {
      cnt++;
      int j = mp[i + 1] - 1;
      mp[a[i]] = j + 1;
      swap(a[i], a[j]);
      mp[i + 1] = i + 1;
    }
    Debug(i, a, mp);
  }
  Debug(cnt);
  cout << (cnt % 2 == n % 2 ? "YES" : "NO") << endl;
  return 0;
}
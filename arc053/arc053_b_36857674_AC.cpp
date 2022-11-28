/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc053/submissions/36857674
 * Submitted at: 2022-11-28 13:23:37
 * Problem URL: https://atcoder.jp/contests/arc053/tasks/arc053_b
 * Result: AC
 * Execution Time: 7 ms
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
  string s;
  cin >> s;
  vector<int> cnt(26, 0);
  rep(i, s.size()) cnt[s[i] - 'a']++;
  int odd = 0, even = 0;
  rep(i, 26) {
    even += cnt[i] / 2;
    if (cnt[i] % 2 == 1) odd++;
  }
  if (odd <= 1) {
    cout << s.size() << endl;
  }
  else {
    cout << even / odd * 2 + 1 << endl;
  }
  return 0;
}
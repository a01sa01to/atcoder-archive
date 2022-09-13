/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc134/submissions/34841548
 * Submitted at: 2022-09-14 00:11:27
 * Problem URL: https://atcoder.jp/contests/arc134/tasks/arc134_b
 * Result: WA
 * Execution Time: 73 ms
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
  string s;
  cin >> s;
  vector cnt(26, set<int>());
  int r = n;
  rep(i, n) cnt[s[i] - 'a'].insert(i);
  rep(i, n) {
    rep(j, 26) {
      if (s[i] - 'a' > j) {
        if (cnt[j].size() > 0) {
          int k = *cnt[j].rbegin();
          if (i < k && k < r) {
            cnt[j].erase(k);
            cnt[s[k] - 'a'].erase(i);
            swap(s[i], s[k]);
            r = k;
          }
        }
      }
    }
  }
  cout << s << endl;
  return 0;
}
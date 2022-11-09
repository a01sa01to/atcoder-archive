/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc140/submissions/36349132
 * Submitted at: 2022-11-10 00:04:04
 * Problem URL: https://atcoder.jp/contests/abc140/tasks/abc140_d
 * Result: AC
 * Execution Time: 14 ms
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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  deque<pair<char, int>> rle;
  rle.push_back({ s[0], 0 });
  rep(i, n) {
    if (rle.back().first == s[i]) {
      rle.back().second++;
    }
    else {
      rle.push_back({ s[i], 1 });
    }
  }
  Debug(rle);
  pair<char, int> f = { rle.front().first, 0 };
  while (!rle.empty()) {
    auto [c, cnt] = rle.front();
    rle.pop_front();
    f.second += cnt;
    Debug(c, cnt, f, k);
    if (k == 0 && c == f.first) break;
    if (c != f.first) k--;
  }
  rle.push_front(f);
  Debug(rle);
  int ans = 0;
  for (auto [c, cnt] : rle) {
    ans += cnt - 1;
  }
  cout << ans << endl;
  return 0;
}
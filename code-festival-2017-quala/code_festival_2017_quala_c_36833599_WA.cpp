/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-quala/submissions/36833599
 * Submitted at: 2022-11-27 01:14:51
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-quala/tasks/code_festival_2017_quala_c
 * Result: WA
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

void no() {
  cout << "No" << endl;
  exit(0);
}

int main() {
  int h, w;
  cin >> h >> w;
  vector a(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  int c1 = (h % 2) * (w % 2);
  int c2 = (h % 2 ? w / 2 : 0) + (w % 2 ? h / 2 : 0);
  int c3 = (h / 2) * (w / 2);
  Debug(c1, c2, c3);
  vector<int> cnt(26, 0);
  rep(i, h) rep(j, w) cnt[a[i][j] - 'a']++;
  priority_queue<int, vector<int>, greater<int>> pq(cnt.begin(), cnt.end());
  while (pq.top() == 0) pq.pop();
  rep(i, 26) {
    if (cnt[i] % 2 == 1) {
      if (c1 > 0) {
        c1--;
        cnt[i] -= 1;
      }
      else {
        no();
      }
    }
  }
  Debug(cnt);
  rep(i, 26) {
    if (cnt[i] % 4 == 2) {
      if (c2 > 0) {
        c2--;
        cnt[i] -= 2;
      }
      else {
        no();
      }
    }
  }
  Debug(cnt);
  rep(i, 26) {
    if (cnt[i] > 0 && cnt[i] % 4 == 0) {
      if (c3 > 0) {
        c3--;
        cnt[i] -= 4;
      }
      else {
        no();
      }
    }
  }
  Debug(cnt);
  Debug(c1, c2, c3);
  if (c1 != 0 || c2 != 0 || c3 != 0) no();
  rep(i, 26) {
    if (cnt[i] != 0) no();
  }
  cout << "Yes" << endl;
  return 0;
}
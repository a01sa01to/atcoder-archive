/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32902626
 * Submitted at: 2022-07-02 21:24:58
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_c
 * Result: TLE
 * Execution Time: 2206 ms
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
  int n, q;
  string s;
  cin >> n >> q >> s;
  deque<pair<char, int>> comp(1, { s[0], 0 });
  rep(i, n) {
    if (comp.back().first == s[i])
      comp.back().second++;
    else
      comp.push_back({ s[i], 1 });
  }
  Debug(comp);
  while (q--) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      while (comp.back().second <= x) {
        if (comp.back().second > x) {
          comp.push_front({ comp.back().first, x });
          comp.back().second -= x;
          x = -100;
        }
        else {
          x -= comp.back().second;
          comp.push_front(comp.back());
          comp.pop_back();
        }
        Debug(comp, x);
      }
      Debug(comp);
    }
    else {
      int idx = 0;
      while (comp[idx].second < x) {
        x -= comp[idx].second;
        Debug(idx, comp[idx], x);
        idx++;
      }
      Debug(idx);
      cout << comp[idx].first << endl;
    }
  }
  return 0;
}
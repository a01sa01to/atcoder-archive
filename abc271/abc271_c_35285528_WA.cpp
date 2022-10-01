/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35285528
 * Submitted at: 2022-10-01 21:19:55
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_c
 * Result: WA
 * Execution Time: 99 ms
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
  deque<int> a;
  {
    vector<int> tmp(n);
    rep(i, n) cin >> tmp[i];
    sort(tmp.begin(), tmp.end());
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    a = deque<int>(tmp.begin(), tmp.end());
  }
  int ans = 0, prv = 0, rm = n - a.size();
  while (true) {
    Debug(a, ans, prv, rm);
    if (!a.empty() && a.front() == prv + 1) {
      ++ans;
      prv = a.front();
      a.pop_front();
    }
    else {
      if (rm >= 2) {
        ++ans;
        ++prv;
        rm -= 2;
      }
      else if (rm == 1 && a.size() >= 1) {
        ++ans;
        ++prv;
        rm = 0;
        a.pop_back();
      }
      else if (a.size() >= 2) {
        ++ans;
        ++prv;
        a.pop_front();
        a.pop_front();
      }
      else {
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
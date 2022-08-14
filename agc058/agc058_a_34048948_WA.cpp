/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc058/submissions/34048948
 * Submitted at: 2022-08-14 22:23:43
 * Problem URL: https://atcoder.jp/contests/agc058/tasks/agc058_a
 * Result: WA
 * Execution Time: 66 ms
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
  vector<int> p(2 * n);
  rep(i, 2 * n) cin >> p[i];
  vector<int> ans(0);
  rep(i, 2 * n - 2) {
    if (i % 2 == 0) {
      if (p[i] < p[i + 1] && p[i + 1] < p[i + 2] && p[i] < p[i + 2]) {
        // 1 2 3
        ans.push_back(i + 2);
        swap(p[i + 1], p[i + 2]);
      }
      else if (p[i] < p[i + 1] && p[i + 1] > p[i + 2] && p[i] < p[i + 2]) {
        // 1 3 2
        // do nothing
      }
      else if (p[i] > p[i + 1] && p[i + 1] < p[i + 2] && p[i] < p[i + 2]) {
        // 2 1 3
        ans.push_back(i + 2);
        swap(p[i + 1], p[i + 2]);
      }
      else if (p[i] < p[i + 1] && p[i + 1] > p[i + 2] && p[i] > p[i + 2]) {
        // 2 3 1
        // do nothing
      }
      else if (p[i] > p[i + 1] && p[i + 1] < p[i + 2] && p[i] > p[i + 2]) {
        // 3 1 2
        ans.push_back(i + 1);
        swap(p[i], p[i + 1]);
      }
      else if (p[i] > p[i + 1] && p[i + 1] > p[i + 2] && p[i] > p[i + 2]) {
        // 3 2 1
        ans.push_back(i + 1);
        swap(p[i], p[i + 1]);
      }
    }
    else {
      if (p[i] < p[i + 1] && p[i + 1] < p[i + 2] && p[i] < p[i + 2]) {
        // 1 2 3
        ans.push_back(i + 1);
        swap(p[i], p[i + 1]);
      }
      else if (p[i] < p[i + 1] && p[i + 1] > p[i + 2] && p[i] < p[i + 2]) {
        // 1 3 2
        ans.push_back(i + 1);
        swap(p[i], p[i + 1]);
      }
      else if (p[i] > p[i + 1] && p[i + 1] < p[i + 2] && p[i] < p[i + 2]) {
        // 2 1 3
        // do nothing
      }
      else if (p[i] < p[i + 1] && p[i + 1] > p[i + 2] && p[i] > p[i + 2]) {
        // 2 3 1
        ans.push_back(i + 2);
        swap(p[i + 1], p[i + 2]);
      }
      else if (p[i] > p[i + 1] && p[i + 1] < p[i + 2] && p[i] > p[i + 2]) {
        // 3 1 2
        // do nothing
      }
      else if (p[i] > p[i + 1] && p[i + 1] > p[i + 2] && p[i] > p[i + 2]) {
        // 3 2 1
        ans.push_back(i + 2);
        swap(p[i + 1], p[i + 2]);
      }
    }
  }
  Debug(p);
  cout << ans.size() << endl;
  for (int i : ans) cout << i << " ";
  cout << endl;
  return 0;
}
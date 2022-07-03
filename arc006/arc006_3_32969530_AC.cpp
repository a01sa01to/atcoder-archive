/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc006/submissions/32969530
 * Submitted at: 2022-07-03 23:53:42
 * Problem URL: https://atcoder.jp/contests/arc006/tasks/arc006_3
 * Result: AC
 * Execution Time: 12 ms
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
  vector<int> box(0);
  rep(_, n) {
    int w;
    cin >> w;
    sort(box.begin(), box.end());
    if (box.empty() || box.back() < w) {
      box.push_back(w);
    }
    else {
      auto itr = lower_bound(box.begin(), box.end(), w);
      *itr = w;
    }
    Debug(box);
  }
  cout << box.size() << endl;
  return 0;
}
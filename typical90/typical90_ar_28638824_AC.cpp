/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28638824
 * Submitted at: 2022-01-20 00:18:05
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ar
 * Result: AC
 * Execution Time: 416 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  deque<int> que;
  rep(i, n) {
    int a;
    cin >> a;
    que.push_back(a);
  }
  rep(_, q) {
    int t, x, y;
    cin >> t >> x >> y;
    --x, --y;
    if (t == 1) {
      swap(que[x], que[y]);
    }
    else if (t == 2) {
      que.push_front(que.back());
      que.pop_back();
    }
    else {
      cout << que[x] << endl;
    }
  }
  return 0;
}
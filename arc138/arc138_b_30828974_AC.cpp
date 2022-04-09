/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc138/submissions/30828974
 * Submitted at: 2022-04-10 00:01:15
 * Problem URL: https://atcoder.jp/contests/arc138/tasks/arc138_b
 * Result: AC
 * Execution Time: 38 ms
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
  deque<int> dq;
  rep(i, n) {
    int a;
    cin >> a;
    dq.push_back(a);
  }
  bool odd = false;
  while (!dq.empty()) {
    if (dq.back() == odd) {
      dq.pop_back();
    }
    else if (dq.front() == odd) {
      dq.pop_front();
      odd = !odd;
    }
    else {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
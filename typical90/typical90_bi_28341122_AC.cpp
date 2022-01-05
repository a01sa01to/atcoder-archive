/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28341122
 * Submitted at: 2022-01-06 00:05:33
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bi
 * Result: AC
 * Execution Time: 183 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int q;
  cin >> q;
  deque<int> dq;
  rep(_, q) {
    int t, x;
    cin >> t >> x;
    if (t == 1) dq.push_front(x);
    else if (t == 2)
      dq.push_back(x);
    else
      cout << dq[x - 1] << endl;
  }
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc084/submissions/32341032
 * Submitted at: 2022-06-10 00:20:48
 * Problem URL: https://atcoder.jp/contests/abc084/tasks/abc084_d
 * Result: AC
 * Execution Time: 201 ms
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
  const int INF = 100001;
  vector<bool> isPrime(INF, true);
  {
    isPrime[0] = isPrime[1] = false;
    rep(i, INF) {
      if (isPrime[i]) {
        for (int j = i * 2; j < INF; j += i) {
          isPrime[j] = false;
        }
      }
    }
  }
  vector<int> sum(INF, 0);
  rep(i, INF) if (isPrime[i] && isPrime[(i + 1) / 2]) sum[i] = 1;
  rep(i, INF - 1) sum[i + 1] += sum[i];

  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << sum[r] - sum[l - 1] << endl;
  }
  return 0;
}
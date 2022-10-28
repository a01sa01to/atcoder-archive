/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc026/submissions/36019610
 * Submitted at: 2022-10-29 00:31:39
 * Problem URL: https://atcoder.jp/contests/arc026/tasks/arc026_2
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

int main() {
  ll n;
  cin >> n;
  vector<ll> div(1, 1);
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      div.push_back(i);
      if (i * i != n) div.push_back(n / i);
    }
  }
  ll sum = accumulate(div.begin(), div.end(), 0LL);
  if (sum == n) {
    cout << "Perfect" << endl;
  }
  else if (sum < n) {
    cout << "Deficient" << endl;
  }
  else {
    cout << "Abundant" << endl;
  }
  return 0;
}
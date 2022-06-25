/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32735994
 * Submitted at: 2022-06-25 22:00:26
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_e
 * Result: TLE
 * Execution Time: 2246 ms
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
#include <boost/multiprecision/cpp_int.hpp>
using Bint = boost::multiprecision::cpp_int;

int main() {
  int n;
  cin >> n;
  vector<int> c(9, 0);
  rep(i, 9) {
    int x;
    cin >> x;
    c[i] = x;
  }
  vector<Bint> d(n + 1, 0);
  rep(i, n) {
    rep(j, 9) {
      if (i + c[j] <= n) d[i + c[j]] = max(d[i + c[j]], 10 * d[i] + j + 1);
    }
  }
  cout << *max_element(d.begin(), d.end()) << endl;
  return 0;
}
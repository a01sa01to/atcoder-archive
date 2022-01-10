/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2020-day1/submissions/28444374
 * Submitted at: 2022-01-10 11:35:53
 * Problem URL: https://atcoder.jp/contests/pakencamp-2020-day1/tasks/pakencamp_2020_day1_b
 * Result: AC
 * Execution Time: 8 ms
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
  string s;
  cin >> s;
  cout << *max_element(s.begin(), s.end()) << endl;
  return 0;
}
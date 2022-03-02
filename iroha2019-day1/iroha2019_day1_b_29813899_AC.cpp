/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/iroha2019-day1/submissions/29813899
 * Submitted at: 2022-03-03 00:13:24
 * Problem URL: https://atcoder.jp/contests/iroha2019-day1/tasks/iroha2019_day1_b
 * Result: AC
 * Execution Time: 3 ms
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
  string _s;
  cin >> _s;
  deque<char> s;
  rep(i, _s.size()) s.push_back(_s[i]);
  int k;
  cin >> k;
  rep(_, k) {
    s.push_back(s.front());
    s.pop_front();
  }
  rep(i, s.size()) cout << s[i];
  cout << endl;
  return 0;
}
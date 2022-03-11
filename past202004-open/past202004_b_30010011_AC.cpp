/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/30010011
 * Submitted at: 2022-03-12 00:00:03
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_b
 * Result: AC
 * Execution Time: 6 ms
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
  string s;
  cin >> s;
  vector<int> a(3, 0);
  rep(i, s.size())++ a[s[i] - 'a'];
  cout << char((max_element(a.begin(), a.end()) - a.begin()) + 'a') << endl;
  return 0;
}
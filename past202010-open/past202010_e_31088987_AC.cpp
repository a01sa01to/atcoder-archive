/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202010-open/submissions/31088987
 * Submitted at: 2022-04-19 00:23:07
 * Problem URL: https://atcoder.jp/contests/past202010-open/tasks/past202010_e
 * Result: AC
 * Execution Time: 14 ms
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
  string s;
  cin >> n >> s;
  string t = s;
  string rev = s;
  reverse(rev.begin(), rev.end());
  sort(t.begin(), t.end());
  do {
    if (t == s) continue;
    if (t == rev) continue;
    cout << t << endl;
    return 0;
  } while (next_permutation(t.begin(), t.end()));
  cout << "None" << endl;
  return 0;
}
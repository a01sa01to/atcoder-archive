/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33459945
 * Submitted at: 2022-07-23 21:41:43
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_c
 * Result: AC
 * Execution Time: 431 ms
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
  int n;
  cin >> n;
  map<string, int> mp;
  while (n--) {
    string s;
    cin >> s;
    if (mp.count(s)) {
      cout << s << "(" << mp[s] << ")" << endl;
    }
    else {
      cout << s << endl;
    }
    mp[s]++;
  }
  return 0;
}
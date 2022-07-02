/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32903527
 * Submitted at: 2022-07-02 21:26:54
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_c
 * Result: AC
 * Execution Time: 539 ms
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
  int n, q;
  string s;
  cin >> n >> q >> s;
  int hoge = 0;
  while (q--) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      hoge -= x;
      hoge = (hoge + n) % n;
    }
    else {
      --x;
      cout << s[(x + hoge) % n] << endl;
    }
  }
  return 0;
}
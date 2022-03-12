/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/30027533
 * Submitted at: 2022-03-12 21:03:10
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_b
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  int hit = 0, blow = 0;
  rep(i, n) {
    if (a[i] == b[i]) ++hit;
  }
  rep(i, n) {
    if (a[i] != b[i]) {
      bool flag = false;
      rep(j, n) {
        if (a[i] == b[j]) {
          flag = true;
          break;
        }
      }
      if (flag) ++blow;
    }
  }
  cout << hit << endl
       << blow << endl;
  return 0;
}
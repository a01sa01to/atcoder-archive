/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jag2017autumn/submissions/30150263
 * Submitted at: 2022-03-15 22:11:01
 * Problem URL: https://atcoder.jp/contests/jag2017autumn/tasks/jag2017autumn_a
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
  int n, h, w;
  cin >> n >> h >> w;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  vector<bool> isopen(w * n, true);
  rep(i, n) {
    if (i % 2 == 0) {
      rep(j, w) isopen[w * i + j + x[i]] = false;
    }
    else {
      rep(j, w) isopen[w * i + j - x[i]] = false;
    }
  }
  cout << h * accumulate(isopen.begin(), isopen.end(), 0) << endl;
  return 0;
}
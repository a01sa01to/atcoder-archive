/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc244/submissions/30274260
 * Submitted at: 2022-03-20 21:06:39
 * Problem URL: https://atcoder.jp/contests/abc244/tasks/abc244_c
 * Result: AC
 * Execution Time: 29 ms
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
  set<int> rem;
  rep(i, 2 * n + 1) rem.insert(i + 1);
  Debug(rem);
  while (true) {
    cout << *rem.begin() << endl;
    rem.erase(rem.begin());
    int x;
    cin >> x;
    if (x == 0) break;
    rem.erase(x);
  }
  return 0;
}
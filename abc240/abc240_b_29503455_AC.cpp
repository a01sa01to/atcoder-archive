/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/29503455
 * Submitted at: 2022-02-20 21:01:37
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_b
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
  int n;
  cin >> n;
  set<int> a;
  rep(i, n) {
    int x;
    cin >> x;
    a.insert(x);
  }
  cout << a.size() << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30426890
 * Submitted at: 2022-03-26 21:01:47
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_b
 * Result: AC
 * Execution Time: 5 ms
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
  set<int> s;
  rep(i, 2002) s.insert(i);
  int n;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    s.erase(a);
  }
  cout << *s.begin() << endl;
  return 0;
}
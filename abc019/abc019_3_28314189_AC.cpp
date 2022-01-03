/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc019/submissions/28314189
 * Submitted at: 2022-01-04 01:15:36
 * Problem URL: https://atcoder.jp/contests/abc019/tasks/abc019_3
 * Result: AC
 * Execution Time: 69 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  set<int> s;
  rep(i, n) {
    int a;
    cin >> a;
    while (a % 2 == 0) a /= 2;
    s.insert(a);
  }
  cout << s.size() << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/28396825
 * Submitted at: 2022-01-08 21:25:23
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_d
 * Result: AC
 * Execution Time: 833 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  multiset<int> s;
  rep(i, n) {
    s.insert(p[i]);
    if (s.size() > k) {
      s.erase(s.begin());
    }
    if (s.size() >= k) {
      cout << *s.begin() << endl;
    }
  }
  return 0;
}
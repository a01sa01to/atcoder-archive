/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc137/submissions/30244165
 * Submitted at: 2022-03-19 22:40:29
 * Problem URL: https://atcoder.jp/contests/arc137/tasks/arc137_b
 * Result: AC
 * Execution Time: 52 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> c(n + 1, 0);
  rep(i, n) c[i + 1] = c[i] + a[i] * 2 - 1;
  Debug(c);
  vector<int> lis(0), lds(0);
  rep(i, n + 1) {
    auto it = lower_bound(lis.begin(), lis.end(), c[i]);
    if (it != lis.end())
      *it = c[i];
    else
      lis.push_back(c[i]);
    it = lower_bound(lds.begin(), lds.end(), -c[i]);
    if (it != lds.end()) *it = -c[i];
    else
      lds.push_back(-c[i]);
  }
  Debug(lis);
  Debug(lds);
  int s = accumulate(a.begin(), a.end(), 0);
  cout << lis.size() + lds.size() - 1 << endl;
  return 0;
}
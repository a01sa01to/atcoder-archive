/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-qualc/submissions/27934630
 * Submitted at: 2021-12-16 13:52:39
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-qualc/tasks/codefestival_2016_qualC_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int k, t;
  cin >> k >> t;
  vector<int> a(t);
  rep(i, t) cin >> a[i];
  sort(a.rbegin(), a.rend());
  int rem = 0;
  for (int i = 1; i < t; ++i) rem += a[i];
  cout << max(0, a[0] - (rem + 1)) << endl;
  return 0;
}

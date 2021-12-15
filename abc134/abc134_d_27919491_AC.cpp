/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc134/submissions/27919491
 * Submitted at: 2021-12-15 12:21:54
 * Problem URL: https://atcoder.jp/contests/abc134/tasks/abc134_d
 * Result: AC
 * Execution Time: 46 ms
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<bool> ans(n, false);
  for (int i = n - 1; i >= 0; --i) {
    int sum = 0;
    for (int j = i + i + 2; j <= n; j += i + 1) sum += ans[j - 1];
    if (sum % 2 != a[i]) ans[i] = true;
  }
  cout << accumulate(ans.begin(), ans.end(), 0) << endl;
  rep(i, n) if (ans[i]) cout << i + 1 << " ";
  cout << endl;
  return 0;
}
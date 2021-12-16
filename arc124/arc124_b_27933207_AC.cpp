/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc124/submissions/27933207
 * Submitted at: 2021-12-16 11:16:31
 * Problem URL: https://atcoder.jp/contests/arc124/tasks/arc124_b
 * Result: AC
 * Execution Time: 172 ms
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
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  set<int> c;
  rep(i, n) c.insert(a[0] ^ b[i]);

  sort(b.begin(), b.end());
  set<int> ans;
  for (int x : c) {
    vector<int> t(n);
    rep(i, n) t[i] = a[i] ^ x;
    sort(t.begin(), t.end());
    if (t == b) ans.insert(x);
  }
  cout << ans.size() << endl;
  for (int x : ans) cout << x << endl;
  return 0;
}
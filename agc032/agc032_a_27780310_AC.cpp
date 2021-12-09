/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc032/submissions/27780310
 * Submitted at: 2021-12-09 19:39:41
 * Problem URL: https://atcoder.jp/contests/agc032/tasks/agc032_a
 * Result: AC
 * Execution Time: 6 ms
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
  vector<int> b(n);
  rep(i, n) cin >> b[i];
  vector<int> ans;
  while (!b.empty()) {
    bool flag = false;
    for (int i = b.size() - 1; i >= 0; --i) {
      if (i + 1 == b[i]) {
        ans.push_back(i + 1);
        b.erase(b.begin() + i);
        flag = true;
        break;
      }
    }
    if (!flag) break;
  }
  reverse(ans.begin(), ans.end());
  if (b.empty())
    for (int i : ans) cout << i << endl;
  else
    cout << -1 << endl;
  return 0;
}
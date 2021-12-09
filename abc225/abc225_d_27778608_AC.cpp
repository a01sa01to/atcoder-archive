/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/27778608
 * Submitted at: 2021-12-09 17:25:22
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_d
 * Result: AC
 * Execution Time: 280 ms
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
  int n, q;
  cin >> n >> q;
  vector<int> prev(n, -1), nxt(n, -1);
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int x, y;
      cin >> x >> y;
      --x, --y;
      nxt[x] = y;
      prev[y] = x;
    }
    else if (t == 2) {
      int x, y;
      cin >> x >> y;
      --x, --y;
      nxt[x] = -1;
      prev[y] = -1;
    }
    else {
      int x;
      cin >> x;
      --x;
      while (prev[x] != -1) x = prev[x];
      vector<int> ans;
      while (nxt[x] != -1) {
        ans.push_back(x + 1);
        x = nxt[x];
      }
      ans.push_back(x + 1);
      cout << ans.size();
      rep(i, ans.size()) cout << " " << ans[i];
      cout << endl;
    }
  }
  return 0;
}
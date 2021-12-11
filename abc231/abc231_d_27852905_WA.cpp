/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/27852905
 * Submitted at: 2021-12-11 22:53:12
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_d
 * Result: WA
 * Execution Time: 69 ms
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
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  dsu d(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    if (d.same(a, b)) {
      puts("No");
      return 0;
    }
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  bool chk = true;
  int cnt = 0;
  rep(i, n) {
    if (Graph[i].size() > 2) {
      chk = false;
      break;
    }
    if (Graph[i].size() == 2) ++cnt;
  }
  puts(chk && cnt <= n - 2 ? "Yes" : "No");
  return 0;
}
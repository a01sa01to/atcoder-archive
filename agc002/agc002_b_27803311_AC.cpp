/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc002/submissions/27803311
 * Submitted at: 2021-12-11 11:31:09
 * Problem URL: https://atcoder.jp/contests/agc002/tasks/agc002_b
 * Result: AC
 * Execution Time: 77 ms
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
  vector<int> cnt(n, 1);
  set<int> rball;
  rball.insert(0);
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    --x, --y;
    if (rball.count(x)) {
      if (cnt[x] == 1) rball.erase(x);
      rball.insert(y);
    }
    --cnt[x];
    ++cnt[y];
  }
  cout << rball.size() << endl;
  return 0;
}
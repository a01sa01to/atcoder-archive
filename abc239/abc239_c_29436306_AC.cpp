/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29436306
 * Submitted at: 2022-02-19 21:08:20
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_c
 * Result: AC
 * Execution Time: 5 ms
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

ll euclidDist(ll x1, ll y1, ll x2, ll y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
  ll x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  vector<pair<ll, ll>> v;
  v.push_back({ x1 + 1, y1 + 2 });
  v.push_back({ x1 + 1, y1 - 2 });
  v.push_back({ x1 - 1, y1 + 2 });
  v.push_back({ x1 - 1, y1 - 2 });
  v.push_back({ x1 + 2, y1 + 1 });
  v.push_back({ x1 + 2, y1 - 1 });
  v.push_back({ x1 - 2, y1 + 1 });
  v.push_back({ x1 - 2, y1 - 1 });
  rep(i, 8) {
    auto [x, y] = v[i];
    if (euclidDist(x, y, x2, y2) == 5) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
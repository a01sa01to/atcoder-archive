/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc048/submissions/32459229
 * Submitted at: 2022-06-14 00:19:32
 * Problem URL: https://atcoder.jp/contests/arc048/tasks/arc048_b
 * Result: AC
 * Execution Time: 87 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct J {
  int rate, id, hand;
  bool operator<(const J& j) const {
    return tie(rate, id) < tie(j.rate, j.id);
  }
  J foo() const {
    return { rate + 1, -1, -1 };
  }
  J bar() const {
    return { rate - 1, 100000000, 100000000 };
  }
};

int main() {
  int n;
  cin >> n;
  vector<J> v(n);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v[i] = { --a, i, --b };
  }
  sort(v.begin(), v.end());
  vector<tuple<int, int, int>> ans(n);
  vector cnt(100000, vector<int>(3, 0));
  rep(i, n) cnt[v[i].rate][v[i].hand]++;
  rep(i, n) {
    // win, lose, draw
    auto& [w, l, d] = ans[v[i].id];
    w = (upper_bound(v.begin(), v.end(), v[i].bar()) - v.begin()) + cnt[v[i].rate][(v[i].hand + 1) % 3];
    l = (v.end() - lower_bound(v.begin(), v.end(), v[i].foo())) + cnt[v[i].rate][(v[i].hand + 2) % 3];
    d = cnt[v[i].rate][v[i].hand] - 1;
  }
  rep(i, n) {
    auto [w, l, d] = ans[i];
    printf("%d %d %d\n", w, l, d);
  }
  return 0;
}
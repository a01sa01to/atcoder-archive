/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30461818
 * Submitted at: 2022-03-26 21:50:08
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_e
 * Result: WA
 * Execution Time: 4411 ms
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
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> v(n), _s(m);
  rep(i, n) cin >> v[i].first;
  rep(i, n) cin >> v[i].second;
  rep(i, m) cin >> _s[i].first;
  rep(i, m) cin >> _s[i].second;
  sort(v.begin(), v.end());
  multiset<pair<int, int>> s(_s.begin(), _s.end());
  rep(i, n) {
    auto it = s.lower_bound(v[i]);
    while (it != s.end() && it->second < v[i].second) ++it;
    if (it == s.end()) {
      cout << "No" << endl;
      return 0;
    }
    Debug(*it);
    s.erase(it);
  }
  cout << "Yes" << endl;
  return 0;
}
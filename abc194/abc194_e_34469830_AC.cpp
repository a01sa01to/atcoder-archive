/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/34469830
 * Submitted at: 2022-08-31 12:26:26
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_e
 * Result: AC
 * Execution Time: 2391 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct mex {
  private:
  set<pair<int, int>> s;

  public:
  mex() {
    s.insert({ INT_MIN, INT_MIN });
    s.insert({ INT_MAX, INT_MAX });
  }
  void add(int x) {
    auto nitr = s.lower_bound({ x + 1, x + 1 });
    auto itr = prev(nitr);
    auto [l, r] = *itr;
    auto [nl, nr] = *nitr;
    if (l <= x && x <= r) return;
    if (r == x - 1) {
      if (nl == x + 1) {
        s.erase(itr);
        s.erase(nitr);
        s.insert({ l, nr });
      }
      else {
        s.erase(itr);
        s.insert({ l, x });
      }
    }
    else {
      if (nl == x + 1) {
        s.erase(nitr);
        s.insert({ x, nr });
      }
      else {
        s.insert({ x, x });
      }
    }
  }
  void erase(int x) {
    auto nitr = s.lower_bound({ x + 1, x + 1 });
    auto itr = prev(nitr);
    auto [l, r] = *itr;
    if (l > x) return;
    if (l == x) {
      if (r == x) {
        s.erase(itr);
      }
      else {
        s.erase(itr);
        s.insert({ x + 1, r });
      }
    }
    else {
      if (r == x) {
        s.erase(itr);
        s.insert({ l, x - 1 });
      }
      else {
        s.erase(itr);
        s.insert({ l, x - 1 });
        s.insert({ x + 1, r });
      }
    }
  }
  int get(int x = 0) {
    auto nitr = s.lower_bound({ x + 1, x + 1 });
    auto itr = prev(nitr);
    auto [l, r] = *itr;
    if (l <= x && x <= r) return r + 1;
    return x;
  }
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  mex mx;
  map<int, int> mp;
  rep(i, m) {
    mp[a[i]]++;
    mx.add(a[i]);
  }
  int ans = 1e9;
  rep(i, n - m) {
    Debug(i, i + m, mx.get());
    ans = min(ans, mx.get());
    mp[a[i]]--;
    if (mp[a[i]] == 0) mx.erase(a[i]);
    mp[a[i + m]]++;
    mx.add(a[i + m]);
  }
  Debug(mx.get());
  ans = min(ans, mx.get());
  cout << ans << endl;
  return 0;
}
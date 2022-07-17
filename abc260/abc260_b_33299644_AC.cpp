/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33299644
 * Submitted at: 2022-07-17 21:14:31
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_b
 * Result: AC
 * Execution Time: 13 ms
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

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<tuple<int, int, int, bool>> v(n);
  rep(i, n) cin >> get<0>(v[i]);
  rep(i, n) cin >> get<1>(v[i]);
  rep(i, n) get<2>(v[i]) = i, get<3>(v[i]) = false;
  Debug(v);
  {
    sort(v.begin(), v.end(), [](auto& a, auto& b) {
      if (get<0>(a) != get<0>(b)) return get<0>(a) > get<0>(b);
      return get<2>(a) < get<2>(b);
    });
    int cnt = 0;
    rep(i, n) {
      if (get<3>(v[i])) continue;
      if (cnt >= x) break;
      get<3>(v[i]) = true;
      cnt++;
    }
    Debug(v);
  }
  {
    sort(v.begin(), v.end(), [](auto& a, auto& b) {
      if (get<1>(a) != get<1>(b)) return get<1>(a) > get<1>(b);
      return get<2>(a) < get<2>(b);
    });
    int cnt = 0;
    rep(i, n) {
      if (get<3>(v[i])) continue;
      if (cnt >= y) break;
      get<3>(v[i]) = true;
      cnt++;
    }
    Debug(v);
  }
  {
    sort(v.begin(), v.end(), [](auto& a, auto& b) {
      if (get<0>(a) + get<1>(a) != get<0>(b) + get<1>(b)) return get<0>(a) + get<1>(a) > get<0>(b) + get<1>(b);
      return get<2>(a) < get<2>(b);
    });
    int cnt = 0;
    rep(i, n) {
      if (get<3>(v[i])) continue;
      if (cnt >= z) break;
      get<3>(v[i]) = true;
      cnt++;
    }
    Debug(v);
  }
  sort(v.begin(), v.end(), [](auto& a, auto& b) {
    return get<2>(a) < get<2>(b);
  });
  rep(i, n) {
    if (get<3>(v[i])) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}
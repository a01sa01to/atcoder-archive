/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33312882
 * Submitted at: 2022-07-17 22:03:00
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_d
 * Result: AC
 * Execution Time: 431 ms
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
  int n, x;
  cin >> n >> x;
  vector<int> p(n);
  rep(i, n) {
    cin >> p[i];
    p[i]--;
  }
  vector<int> ans(n, -2);
  map<int, vector<int>> mp;
  rep(i, n) {
    auto it = mp.lower_bound(p[i]);
    int k;
    if (it == mp.end()) {
      k = p[i];
      mp[p[i]] = { p[i] };
    }
    else {
      k = it->first;
      mp[k].push_back(p[i]);
    }

    if (mp[k].size() == x) {
      auto v = mp[k];
      mp.erase(k);
      rep(j, v.size()) {
        ans[v[j]] = i;
      }
    }
    else if (k != p[i]) {
      swap(mp[k], mp[p[i]]);
      mp.erase(k);
    }
    Debug(mp, ans);
  }
  rep(i, n) {
    cout << ans[i] + 1 << endl;
  }
  return 0;
}
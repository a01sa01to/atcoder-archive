/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/37398439
 * Submitted at: 2022-12-20 01:08:06
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_d
 * Result: AC
 * Execution Time: 565 ms
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
  array<string, 3> s;
  cin >> s[0] >> s[1] >> s[2];
  vector<char> used;
  for (auto t : s) {
    rep(i, t.size()) used.push_back(t[i]);
  }
  sort(used.begin(), used.end());
  used.erase(unique(used.begin(), used.end()), used.end());
  if (used.size() > 10) {
    cout << "UNSOLVABLE" << endl;
    return 0;
  }
  map<char, int> mp;
  rep(i, used.size()) mp[used[i]] = i;
  vector<int> p(10);
  iota(p.begin(), p.end(), 0);
  do {
    array<ll, 3> v = { 0, 0, 0 };
    bool ok = true;
    rep(k, 3) {
      rep(i, s[k].size()) {
        if (i == 0 && p[mp[s[k][i]]] == 0) ok = false;
        v[k] = v[k] * 10 + p[mp[s[k][i]]];
      }
    }
    if (!ok) continue;
    if (v[0] + v[1] == v[2]) {
      cout << v[0] << endl;
      cout << v[1] << endl;
      cout << v[2] << endl;
      return 0;
    }
  } while (next_permutation(p.begin(), p.end()));
  cout << "UNSOLVABLE" << endl;
  return 0;
}
/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/33996949
 * Submitted at: 2022-08-13 21:17:05
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_d
 * Result: AC
 * Execution Time: 19 ms
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

pair<ll, vector<ll>> invNum(vector<ll> a) {
  ll n = a.size();
  if (n <= 1) return { 0, a };
  ll mid = n / 2;
  auto left = invNum(vector<ll>(a.begin(), a.begin() + mid));
  auto right = invNum(vector<ll>(a.begin() + mid, a.end()));
  vector<ll> res;
  ll inv = 0;
  inv += left.first + right.first;
  ll i = 0, j = 0;
  while (i < left.second.size() && j < right.second.size()) {
    if (left.second[i] < right.second[j]) {
      res.push_back(left.second[i]);
      i++;
    }
    else {
      res.push_back(right.second[j]);
      j++;
      inv += left.second.size() - i;
    }
  }
  while (i < left.second.size()) {
    res.push_back(left.second[i]);
    i++;
  }
  while (j < right.second.size()) {
    res.push_back(right.second[j]);
    j++;
  }
  return { inv, res };
}
int main() {
  string s;
  cin >> s;
  vector<ll> a(7);
  string at = "atcoder";
  rep(i, 7) {
    rep(j, 7) {
      if (s[i] == at[j]) a[i] = j;
    }
  }
  auto res = invNum(a);
  cout << res.first << endl;
  return 0;
}
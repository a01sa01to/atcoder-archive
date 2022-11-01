/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/36131638
 * Submitted at: 2022-11-01 14:38:12
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_j
 * Result: AC
 * Execution Time: 60 ms
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
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  cout << invNum(a).first << endl;
  return 0;
}
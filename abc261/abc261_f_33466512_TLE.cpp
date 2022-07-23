/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33466512
 * Submitted at: 2022-07-23 22:04:07
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_f
 * Result: TLE
 * Execution Time: 3309 ms
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

pair<ll, vector<pair<ll, ll>>> invNum(vector<pair<ll, ll>> a) {
  ll n = a.size();
  if (n <= 1) return { 0, a };
  ll mid = n / 2;
  auto left = invNum(vector<pair<ll, ll>>(a.begin(), a.begin() + mid));
  auto right = invNum(vector<pair<ll, ll>>(a.begin() + mid, a.end()));
  vector<pair<ll, ll>> res;
  ll inv = 0;
  inv += left.first + right.first;
  ll i = 0, j = 0;
  while (i < left.second.size() && j < right.second.size()) {
    if (left.second[i].first <= right.second[j].first) {
      res.push_back(left.second[i]);
      i++;
    }
    else {
      res.push_back(right.second[j]);
      inv += left.second.size() - i;
      for (int k = i; k < left.second.size(); ++k) {
        if (left.second[k].second == right.second[j].second) {
          inv--;
        }
      }
      j++;
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
  ll n;
  cin >> n;
  vector<pair<ll, ll>> a(n);
  rep(i, n) cin >> a[i].second;
  rep(i, n) cin >> a[i].first;
  auto res = invNum(a);
  cout << res.first << endl;
  return 0;
}
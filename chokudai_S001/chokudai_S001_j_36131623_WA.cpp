/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/36131623
 * Submitted at: 2022-11-01 14:36:36
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_j
 * Result: WA
 * Execution Time: 57 ms
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

pair<int, vector<int>> invNum(vector<int> a) {
  int n = a.size();
  if (n <= 1) return { 0, a };
  int mid = n / 2;
  auto left = invNum(vector<int>(a.begin(), a.begin() + mid));
  auto right = invNum(vector<int>(a.begin() + mid, a.end()));
  vector<int> res;
  int inv = 0;
  inv += left.first + right.first;
  int i = 0, j = 0;
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  cout << invNum(a).first << endl;
  return 0;
}
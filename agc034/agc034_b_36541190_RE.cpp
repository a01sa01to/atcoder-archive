/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc034/submissions/36541190
 * Submitted at: 2022-11-17 00:32:16
 * Problem URL: https://atcoder.jp/contests/agc034/tasks/agc034_b
 * Result: RE
 * Execution Time: 107 ms
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

// Usage: T = 転倒数の型、U = 要素の型
template<typename T, typename U>
pair<T, vector<U>> invNum(vector<U> a) {
  size_t n = a.size();
  if (n <= 1) return { (T) 0, a };
  size_t mid = n / 2;
  auto left = invNum<T, U>(vector<U>(a.begin(), a.begin() + mid));
  auto right = invNum<T, U>(vector<U>(a.begin() + mid, a.end()));
  vector<U> res;
  T inv = 0;
  inv += left.first + right.first;
  size_t i = 0, j = 0;
  while (i < left.second.size() && j < right.second.size()) {
    if (left.second[i] <= right.second[j]) {
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
  ll ans = 0;
  vector<ll> t(0);
  rep(i, s.size() - 1) {
    bool flg = false;
    if (s[i] == 'A') {
      t.push_back(1);
      flg = true;
    }
    if (s[i] == 'B') {
      if (s[i + 1] == 'C') {
        t.push_back(0);
        i++;
        flg = true;
      }
    }
    if (!flg) {
      while (t.back() == 0) t.pop_back();
      auto res = invNum<ll, ll>(t);
      Debug(t, res.first);
      ans += res.first;
      t.clear();
    }
  }
  auto res = invNum<ll, ll>(t);
  Debug(t, res.first);
  ans += res.first;
  cout << ans << endl;
  return 0;
}
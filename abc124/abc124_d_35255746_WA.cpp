/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc124/submissions/35255746
 * Submitted at: 2022-10-01 00:49:41
 * Problem URL: https://atcoder.jp/contests/abc124/tasks/abc124_d
 * Result: WA
 * Execution Time: 12 ms
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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<pair<char, int>> rle;
  rle.push_back({ s[0], 0 });
  rep(i, n) {
    if (rle.back().first == s[i]) {
      rle.back().second++;
    }
    else {
      rle.push_back({ s[i], 1 });
    }
  }
  if (rle.size() <= 2 * k) {
    cout << n << endl;
    return 0;
  }
  rle.push_back({ (1 ^ (rle.back().first - '0')) + '0', 0 });
  rle.push_back({ (1 ^ (rle.back().first - '0')) + '0', 0 });
  Debug(rle);
  int ans = 0, sum = 0;
  if (rle[0].first == '0') {
    rep(i, 2 * k) sum += rle[i].second;
    ans = sum;
    int i = 0;
    while (i + 2 * k < rle.size() - 1) {
      Debug(sum, i, i + 2 * k);
      sum -= rle[i].second;
      sum += rle[i + 2 * k].second;
      ans = max(ans, sum);
      sum -= rle[i + 1].second;
      sum += rle[i + 2 * k + 1].second;
      i += 2;
    }
  }
  else {
    rep(i, 2 * k + 1) sum += rle[i].second;
    ans = sum;
    int i = 0;
    while (i + 2 * k < rle.size() - 2) {
      Debug(sum, i, i + 2 * k);
      sum -= rle[i].second;
      sum -= rle[i + 1].second;
      sum += rle[i + 2 * k + 1].second;
      sum += rle[i + 2 * k + 2].second;
      ans = max(ans, sum);
      i += 2;
    }
  }
  cout << ans << endl;
  return 0;
}